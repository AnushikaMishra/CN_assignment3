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
} node1_table;

float current_time;

int link_costs_1[4] = { 1, 0, 1, 999 };
struct rtpkt packets_from_1[4];
int min_costs_1[4];

int min_val_1(int a, int b) { return a < b ? a : b; }
int find_minimum_1(int arr[]) {
  return min_val_1(min_val_1(min_val_1(arr[0], arr[1]), arr[2]), arr[3]);
}

void compute_min_costs_1() {
  for (int i = 0; i < 4; i++) {
    min_costs_1[i] = find_minimum_1(node1_table.costs[i]);
  }
}

void broadcast_update_1() {
  for (int i = 0; i < 4; i++) {
    packets_from_1[i].sourceid = 1;
    packets_from_1[i].destid = i;
    memcpy(packets_from_1[i].mincost, min_costs_1, sizeof(min_costs_1));
  }

  for (int i = 0; i < 3; i++) {
    if (i != 1) {
      tolayer2(packets_from_1[i]);
      printf("At time t=%.3f, node %d sends packet to node %d with: (%d  %d  %d  %d)\n",
             current_time, packets_from_1[i].sourceid, packets_from_1[i].destid,
             packets_from_1[i].mincost[0], packets_from_1[i].mincost[1],
             packets_from_1[i].mincost[2], packets_from_1[i].mincost[3]);
    }
  }
}

void check_and_broadcast_1() {
  int previous_costs[4];
  memcpy(previous_costs, min_costs_1, sizeof(min_costs_1));

  compute_min_costs_1();

  int changed = 0;
  for (int i = 0; i < 4; i++) {
    if (previous_costs[i] != min_costs_1[i]) {
      changed = 1;
      break;
    }
  }

  if (changed) {
    broadcast_update_1();
  } else {
    printf("\nMinimum cost didn't change. No new packets are sent\n");
  }
}

void rtinit1() {
  printf("rtinit1() is called at time t = %.3f\n", current_time);

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      node1_table.costs[i][j] = (i == j) ? link_costs_1[i] : INFINITY;
    }
  }

  print_distance_table_1(&node1_table);

  compute_min_costs_1();
  broadcast_update_1();
}

void rtupdate1(struct rtpkt *incoming_pkt) {
  int sender = incoming_pkt->sourceid;
  int updated_costs[4];
  for (int i = 0; i < 4; i++) {
    updated_costs[i] = incoming_pkt->mincost[i];
  }

  printf("rtupdate1() is called at time t = %.3f as node %d sent a pkt with (%d  %d  %d  %d)\n",
         current_time, sender, updated_costs[0], updated_costs[1], updated_costs[2], updated_costs[3]);

  for (int i = 0; i < 4; i++) {
    int new_cost = node1_table.costs[sender][sender] + updated_costs[i];
    node1_table.costs[i][sender] = (new_cost < INFINITY) ? new_cost : INFINITY;
  }

  print_distance_table_1(&node1_table);
  check_and_broadcast_1();
}

void print_distance_table_1(struct distance_table *dt) {
  printf("             via   \n");
  printf("   D1 |    0     2 \n");
  printf("  ----|-----------\n");
  printf("     0|  %3d   %3d\n", dt->costs[0][0], dt->costs[0][2]);
  printf("dest 2|  %3d   %3d\n", dt->costs[2][0], dt->costs[2][2]);
  printf("     3|  %3d   %3d\n", dt->costs[3][0], dt->costs[3][2]);
}

void print_min_costs_1() {
  printf("Minimum cost from node 1 to others: %d %d %d %d\n",
         min_costs_1[0], min_costs_1[1], min_costs_1[2], min_costs_1[3]);
}

void linkhandler1(int link_id, int updated_cost) {
  int previous_deltas[4];
  for (int i = 0; i < 4; i++) {
    previous_deltas[i] = node1_table.costs[i][link_id] - node1_table.costs[link_id][link_id];
  }

  for (int i = 0; i < 4; i++) {
    node1_table.costs[i][link_id] = updated_cost + previous_deltas[i];
  }

  print_distance_table_1(&node1_table);
  check_and_broadcast_1();
}
