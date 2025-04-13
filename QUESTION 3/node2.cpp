#include <stdio.h>
#include <string.h>

extern struct rtpkt {
    int sourceid;       /* id of sending router sending this pkt */
    int destid;         /* id of router to which pkt being sent (must be an immediate neighbor) */
    int mincost[4];     /* min cost to node 0 ... 3 */
};

extern int TRACE;
extern int YES;
extern int NO;

struct distance_table {
    int costs[4][4];
} dt2;

#define INFINITY 999

float clocktime;

int connectcosts2[4] = { 3, 1, 0, 2 };
struct rtpkt pkt2[4];
int min_cost_2[4];

// Helper functions
int min_2(int a, int b) { return a < b ? a : b; }

int min2(int a[]) {
    return min_2(min_2(min_2(a[0], a[1]), a[2]), a[3]);
}

// Calculate minimum cost to all nodes
void calc_min_cost2() {
    for (int i = 0; i < 4; i++) {
        min_cost_2[i] = min2(dt2.costs[i]);
    }
}

// Send packets to all neighbors
void sendpkt2() {
    for (int i = 0; i < 4; i++) {
        pkt2[i].sourceid = 2;
        pkt2[i].destid = i;
        memcpy(pkt2[i].mincost, min_cost_2, sizeof(min_cost_2));
    }

    for (int i = 0; i < 4; i++) {
        if (i != 2 && connectcosts2[i] < INFINITY) {
            tolayer2(pkt2[i]);
            printf("At time t=%.3f, node %d sends packet to node %d with: (%d  %d  %d  %d)\n",
                   clocktime, pkt2[i].sourceid, pkt2[i].destid,
                   pkt2[i].mincost[0], pkt2[i].mincost[1], pkt2[i].mincost[2], pkt2[i].mincost[3]);
        }
    }
}

// Recalculate and send if costs changed
void calc_send_pkt2() {
    int old_min_cost[4];
    memcpy(old_min_cost, min_cost_2, sizeof(min_cost_2));

    calc_min_cost2();

    int changed = 0;
    for (int i = 0; i < 4; i++) {
        if (old_min_cost[i] != min_cost_2[i]) {
            changed = 1;
            break;
        }
    }

    if (changed) {
        sendpkt2();
    } else {
        printf("\nMinimum cost didn't change. No new packets are sent\n");
    }
}

// Initialization
void rtinit2() {
    printf("rtinit2() is called at time t=: %.3f\n", clocktime);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            dt2.costs[i][j] = INFINITY;
        }
    }

    for (int i = 0; i < 4; i++) {
        dt2.costs[i][i] = connectcosts2[i];
    }

    printdt2(&dt2);
    calc_min_cost2();
    sendpkt2();
}

// Handle received packet
void rtupdate2(struct rtpkt *rcvdpkt) {
    int src = rcvdpkt->sourceid;

    printf("rtupdate2() is called at time t=: %.3f as node %d sent a pkt with (%d  %d  %d  %d)\n",
           clocktime, src,
           rcvdpkt->mincost[0], rcvdpkt->mincost[1],
           rcvdpkt->mincost[2], rcvdpkt->mincost[3]);

    int updated = 0;

    for (int i = 0; i < 4; i++) {
        int new_cost = dt2.costs[src][src] + rcvdpkt->mincost[i];
        if (new_cost < dt2.costs[i][src]) {
            dt2.costs[i][src] = new_cost;
            updated = 1;
        }
    }

    if (updated) {
        printdt2(&dt2);
        calc_send_pkt2();
    } else {
        printf("No changes in dt2 from update, so nothing sent.\n");
    }
}

// Distance table print
void printdt2(struct distance_table *dtptr) {
    printf("                via     \n");
    printf("   D2 |    0     1    3 \n");
    printf("  ----|-----------------\n");
    printf("     0|  %3d   %3d   %3d\n", dtptr->costs[0][0],
           dtptr->costs[0][1], dtptr->costs[0][3]);
    printf("dest 1|  %3d   %3d   %3d\n", dtptr->costs[1][0],
           dtptr->costs[1][1], dtptr->costs[1][3]);
    printf("     3|  %3d   %3d   %3d\n", dtptr->costs[3][0],
           dtptr->costs[3][1], dtptr->costs[3][3]);
}

// Optional link cost handler
void linkhandler2(int linkid, int newcost) {
    int old_dist_linkid_to_others[4];
    for (int i = 0; i < 4; i++) {
        old_dist_linkid_to_others[i] = dt2.costs[i][linkid] - dt2.costs[linkid][linkid];
    }

    int new_dist_2_to_linkid = newcost;

    for (int i = 0; i < 4; i++) {
        dt2.costs[i][linkid] = new_dist_2_to_linkid + old_dist_linkid_to_others[i];
    }

    dt2.costs[linkid][linkid] = newcost;
    connectcosts2[linkid] = newcost;

    printf("Link cost change handled at node 2. Updated cost to node %d = %d\n", linkid, newcost);
    printdt2(&dt2);
    calc_send_pkt2();
}
