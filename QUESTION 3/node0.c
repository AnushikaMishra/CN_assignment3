#include <stdio.h>
#include <string.h>

extern struct rtpkt {
  int sourceid;     
  int destid;       
  int mincost[4];   
};

extern int TRACE;
extern int YES;
extern int NO;

#define INFINITY 999

struct distance_table {
  int costs[4][4];
} node0_table;

float current_time;

int direct_costs_0[4] = { 0, 1, 3, 7 };
struct rtpkt outgoing_pkts_0[4];
int min_path_cost_0[4];

int minimum_0(int a, int b) { return a < b ? a : b; }

int find_minimum_0(int arr[]) {
  return minimum_0(minimum_0(minimum_0(arr[0], arr[1]), arr[2]), arr[3]);
}

void update_min_path_cost_0() {
  for (int i = 0; i < 4; i++) {
    min_path_cost_0[i] = find_minimum_0(node0_table.costs[i]);
  }
}

void transmit_packets_0() {
  for (int i = 0; i < 4; i++) {
    outgoing_pkts_0[i].sourceid = 0;
    outgoing_pkts_0[i].destid = i;
    memcpy(outgoing_pkts_0[i].mincost, min_path_cost_0, sizeof(min_path_cost_0));
  }

  for (int i = 0; i < 4; i++) {
    if (i != 0) {
      tolayer2(outgoing_pkts_0[i]);
      printf("At time t=%.3f, node %d sends packet to node %d with: (%d  %d  %d  %d)\n",
             current_time, outgoing_pkts_0[i].sourceid, outgoing_pkts_0[i].destid,
             outgoing_pkts_0[i].mincost[0], outgoing_pkts_0[i].mincost[1],
             outgoing_pkts_0[i].mincost[2], outgoing_pkts_0[i].mincost[3]);
    }
  }
}

void check_and_transmit_0() {
  int previous_costs[4];
  memcpy(previous_costs, min_path_cost_0, sizeof(min_path_cost_0));

  update_min_path_cost_0();

  int changed = 0;
  for (int i = 0; i < 4; i++) {
    if (previous_costs[i] != min_path_cost_0[i]) {
      changed = 1;
      break;
    }
  }

  if (changed) {
    transmit_packets_0();
  } else {
    printf("\nNo change in minimum costs. Packets not sent.\n");
  }
}

void rtinit0() {
  printf("rtinit0() is called at time t = %.3f\n", current_time);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      node0_table.costs[i][j] = (i == j) ? direct_costs_0[i] : INFINITY;
    }
  }

  display_table_0(&node0_table);

  update_min_path_cost_0();
  transmit_packets_0();
}

void rtupdate0(struct rtpkt *received_pkt) {
  int sender_id = received_pkt->sourceid;
  int incoming_costs[4];
  for (int i = 0; i < 4; i++) {
    incoming_costs[i] = received_pkt->mincost[i];
  }

  printf("rtupdate0() called at t=%.3f by packet from node %d with (%d  %d  %d  %d)\n",
         current_time, sender_id,
         incoming_costs[0], incoming_costs[1], incoming_costs[2], incoming_costs[3]);

  for (int i = 0; i < 4; i++) {
    int new_cost = node0_table.costs[sender_id][sender_id] + incoming_costs[i];
    node0_table.costs[i][sender_id] = (new_cost < INFINITY) ? new_cost : INFINITY;
  }

  display_table_0(&node0_table);
  check_and_transmit_0();
}

void display_table_0(struct distance_table *dt) {
  printf("                via     \n");
  printf("   D0 |    1     2    3 \n");
  printf("  ----|-----------------\n");
  printf("     1|  %3d   %3d   %3d\n", dt->costs[1][1], dt->costs[1][2], dt->costs[1][3]);
  printf("dest 2|  %3d   %3d   %3d\n", dt->costs[2][1], dt->costs[2][2], dt->costs[2][3]);
  printf("     3|  %3d   %3d   %3d\n", dt->costs[3][1], dt->costs[3][2], dt->costs[3][3]);
}

void show_min_path_0() {
  printf("Minimum cost from node 0 to others: %d %d %d %d\n",
         min_path_cost_0[0], min_path_cost_0[1], min_path_cost_0[2], min_path_cost_0[3]);
}

void linkhandler0(int link_id, int updated_cost) {
  int cost_deltas[4];
  for (int i = 0; i < 4; i++) {
    cost_deltas[i] = node0_table.costs[i][link_id] - node0_table.costs[link_id][link_id];
  }

  for (int i = 0; i < 4; i++) {
    node0_table.costs[i][link_id] = updated_cost + cost_deltas[i];
  }

  display_table_0(&node0_table);
  check_and_transmit_0();
}
