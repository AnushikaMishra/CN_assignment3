Enter TRACE:rtinit0() is called at time t=: 0.000
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1   999   999
dest 2|  999     3   999
     3|  999   999     7
At time t=0.000, node 0 sends packet to node 1 with: (0  1  3  7)
At time t=0.000, node 0 sends packet to node 2 with: (0  1  3  7)
At time t=0.000, node 0 sends packet to node 3 with: (0  1  3  7)
rtinit1() called at time t=0.000
             via   
   D1 |    0     2 
  ----|-----------
     0|    1   999
dest 2|  999     1
     3|  999   999
At time t=0.000, node 1 sends packet to node 0 with: (1  0  1  999)
At time t=0.000, node 1 sends packet to node 2 with: (1  0  1  999)
rtinit2() called at time t=0.000
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3   999   999
dest 1|  999     1   999
     3|  999   999     2
At time t=0.000, node 2 sends packet to node 0 with: (3  1  0  2)
At time t=0.000, node 2 sends packet to node 1 with: (3  1  0  2)
At time t=0.000, node 2 sends packet to node 3 with: (3  1  0  2)
rtinit3() called at time t=0.000
             via     
   D3 |    0     2 
  ----|-----------
     0|    7   999
dest 1|  999   999
     2|  999     2
At time t=0.000, node 3 sends packet to node 0 with: (7  999  2  0)
At time t=0.000, node 3 sends packet to node 2 with: (7  999  2  0)
rtupdate3() called at time t=0.947 from 0 with (0 1 3 7)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7   999
dest 1|    8   999
     2|   10     2
At time t=0.947, node 3 sends packet to node 0 with: (7  8  2  0)
At time t=0.947, node 3 sends packet to node 2 with: (7  8  2  0)
rtupdate0(struct rtpkt *) is called at time t=: 0.992 as node 1 sent a pkt with (1  0  1  999)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1   999   999
dest 2|    2     3   999
     3|  999   999     7
At time t=0.992, node 0 sends packet to node 1 with: (0  1  2  7)
At time t=0.992, node 0 sends packet to node 2 with: (0  1  2  7)
At time t=0.992, node 0 sends packet to node 3 with: (0  1  2  7)
rtupdate3() called at time t=1.209 from 2 with (3 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     5
dest 1|    8     3
     2|   10     2
At time t=1.209, node 3 sends packet to node 0 with: (5  3  2  0)
At time t=1.209, node 3 sends packet to node 2 with: (5  3  2  0)
rtupdate3() called at time t=1.276 from 0 with (0 1 2 7)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     5
dest 1|    8     3
     2|    9     2
At time t=1.276, node 3 sends packet to node 0 with: (5  3  2  0)
At time t=1.276, node 3 sends packet to node 2 with: (5  3  2  0)
rtupdate2() called at time t=1.642 from 0 with (0 1 3 7)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3   999   999
dest 1|    4     1   999
     3|   10   999     2
At time t=1.642, node 2 sends packet to node 0 with: (3  1  0  2)
At time t=1.642, node 2 sends packet to node 1 with: (3  1  0  2)
At time t=1.642, node 2 sends packet to node 3 with: (3  1  0  2)
rtupdate1() called at time t=1.871 from 0 with (0 1 3 7)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1   999
dest 2|    4     1
     3|    8   999
At time t=1.871, node 1 sends packet to node 0 with: (1  0  1  8)
At time t=1.871, node 1 sends packet to node 2 with: (1  0  1  8)
rtupdate2() called at time t=2.166 from 1 with (1 0 1 999)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2   999
dest 1|    4     1   999
     3|   10   999     2
At time t=2.166, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=2.166, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=2.166, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate0(struct rtpkt *) is called at time t=: 2.407 as node 2 sent a pkt with (3  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4   999
dest 2|    2     3   999
     3|  999     5     7
At time t=2.407, node 0 sends packet to node 1 with: (0  1  2  5)
At time t=2.407, node 0 sends packet to node 2 with: (0  1  2  5)
At time t=2.407, node 0 sends packet to node 3 with: (0  1  2  5)
rtupdate2() called at time t=2.421 from 3 with (7 999 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     9
dest 1|    4     1   999
     3|   10   999     2
At time t=2.421, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=2.421, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=2.421, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate1() called at time t=2.811 from 2 with (3 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     4
dest 2|    4     1
     3|    8     3
At time t=2.811, node 1 sends packet to node 0 with: (1  0  1  3)
At time t=2.811, node 1 sends packet to node 2 with: (1  0  1  3)
rtupdate3() called at time t=3.078 from 2 with (3 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     5
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate2() called at time t=3.293 from 3 with (7 8 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     9
dest 1|    4     1    10
     3|   10   999     2
At time t=3.293, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=3.293, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=3.293, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate2() called at time t=4.063 from 0 with (0 1 2 7)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     9
dest 1|    4     1    10
     3|   10   999     2
At time t=4.063, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=4.063, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=4.063, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate0(struct rtpkt *) is called at time t=: 4.104 as node 3 sent a pkt with (7  999  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4   999
dest 2|    2     3     9
     3|  999     5     7

Minimum cost didn't change. No new packets are sent
rtupdate2() called at time t=4.169 from 3 with (5 3 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     7
dest 1|    4     1     5
     3|   10   999     2
At time t=4.169, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=4.169, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=4.169, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate0(struct rtpkt *) is called at time t=: 4.330 as node 3 sent a pkt with (7  8  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    15
dest 2|    2     3     9
     3|  999     5     7

Minimum cost didn't change. No new packets are sent
rtupdate3() called at time t=4.557 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
At time t=4.557, node 3 sends packet to node 0 with: (4  3  2  0)
At time t=4.557, node 3 sends packet to node 2 with: (4  3  2  0)
rtupdate1() called at time t=4.643 from 0 with (0 1 2 7)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     4
dest 2|    3     1
     3|    8     3
At time t=4.643, node 1 sends packet to node 0 with: (1  0  1  3)
At time t=4.643, node 1 sends packet to node 2 with: (1  0  1  3)
rtupdate3() called at time t=5.093 from 0 with (0 1 2 5)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
At time t=5.093, node 3 sends packet to node 0 with: (4  3  2  0)
At time t=5.093, node 3 sends packet to node 2 with: (4  3  2  0)
rtupdate0(struct rtpkt *) is called at time t=: 5.213 as node 3 sent a pkt with (5  3  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|  999     5     7

Minimum cost didn't change. No new packets are sent
rtupdate3() called at time t=5.271 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate3() called at time t=5.378 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate3() called at time t=5.740 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate1() called at time t=5.820 from 2 with (3 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     4
dest 2|    3     1
     3|    8     3
No change in min costs, no packets sent
rtupdate3() called at time t=5.935 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate2() called at time t=6.042 from 3 with (5 3 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     7
dest 1|    4     1     5
     3|   10   999     2
No change in min costs at node 2, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 6.071 as node 3 sent a pkt with (5  3  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|  999     5     7

Minimum cost didn't change. No new packets are sent
rtupdate1() called at time t=6.205 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    8     3
At time t=6.205, node 1 sends packet to node 0 with: (1  0  1  3)
At time t=6.205, node 1 sends packet to node 2 with: (1  0  1  3)
rtupdate1() called at time t=6.886 from 0 with (0 1 2 5)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
At time t=6.886, node 1 sends packet to node 0 with: (1  0  1  3)
At time t=6.886, node 1 sends packet to node 2 with: (1  0  1  3)
rtupdate0(struct rtpkt *) is called at time t=: 7.021 as node 2 sent a pkt with (3  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|  999     5     7

Minimum cost didn't change. No new packets are sent
rtupdate1() called at time t=7.060 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate2() called at time t=7.160 from 1 with (1 0 1 8)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     7
dest 1|    4     1     5
     3|   10     9     2
At time t=7.160, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=7.160, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=7.160, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate3() called at time t=7.274 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate2() called at time t=7.464 from 0 with (0 1 2 5)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     7
dest 1|    4     1     5
     3|    8     9     2
At time t=7.464, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=7.464, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=7.464, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate0(struct rtpkt *) is called at time t=: 7.732 as node 1 sent a pkt with (1  0  1  8)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    9     5     7

Minimum cost didn't change. No new packets are sent
rtupdate3() called at time t=7.881 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate1() called at time t=8.438 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate2() called at time t=8.630 from 1 with (1 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     7
dest 1|    4     1     5
     3|    8     4     2
At time t=8.630, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=8.630, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=8.630, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate2() called at time t=8.643 from 3 with (4 3 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    8     4     2
At time t=8.643, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=8.643, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=8.643, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate2() called at time t=8.711 from 1 with (1 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    8     4     2
No change in min costs at node 2, no packets sent
rtupdate3() called at time t=9.222 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate1() called at time t=9.513 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 9.514 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    9     5     7

Minimum cost didn't change. No new packets are sent
rtupdate2() called at time t=9.661 from 3 with (4 3 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    8     4     2
No change in min costs at node 2, no packets sent
rtupdate2() called at time t=9.710 from 1 with (1 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    8     4     2
No change in min costs at node 2, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 10.531 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    9     5     7

Minimum cost didn't change. No new packets are sent
rtupdate3() called at time t=10.980 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate2() called at time t=11.439 from 1 with (1 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    8     4     2
No change in min costs at node 2, no packets sent
rtupdate1() called at time t=11.460 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate1() called at time t=11.628 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate1() called at time t=12.476 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 12.495 as node 1 sent a pkt with (1  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7
At time t=12.495, node 0 sends packet to node 1 with: (0  1  2  4)
At time t=12.495, node 0 sends packet to node 2 with: (0  1  2  4)
At time t=12.495, node 0 sends packet to node 3 with: (0  1  2  4)
rtupdate0(struct rtpkt *) is called at time t=: 13.197 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate2() called at time t=13.703 from 0 with (0 1 2 4)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
At time t=13.703, node 2 sends packet to node 0 with: (2  1  0  2)
At time t=13.703, node 2 sends packet to node 1 with: (2  1  0  2)
At time t=13.703, node 2 sends packet to node 3 with: (2  1  0  2)
rtupdate0(struct rtpkt *) is called at time t=: 14.161 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate1() called at time t=14.342 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate3() called at time t=14.360 from 0 with (0 1 2 4)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
At time t=14.360, node 3 sends packet to node 0 with: (4  3  2  0)
At time t=14.360, node 3 sends packet to node 2 with: (4  3  2  0)
rtupdate3() called at time t=14.587 from 2 with (2 1 0 2)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate2() called at time t=14.589 from 3 with (4 3 2 0)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
No change in min costs at node 2, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 15.353 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate1() called at time t=16.172 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    6     3
No change in min costs, no packets sent
rtupdate1() called at time t=16.233 from 0 with (0 1 2 4)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    5     3
At time t=16.233, node 1 sends packet to node 0 with: (1  0  1  3)
At time t=16.233, node 1 sends packet to node 2 with: (1  0  1  3)
rtupdate2() called at time t=16.413 from 1 with (1 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
No change in min costs at node 2, no packets sent
rtupdate1() called at time t=16.516 from 2 with (2 1 0 2)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    5     3
No change in min costs, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 17.314 as node 3 sent a pkt with (4  3  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 18.391 as node 1 sent a pkt with (1  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 19.263 as node 3 sent a pkt with (4  3  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 20.280 as node 1 sent a pkt with (1  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 20.666 as node 1 sent a pkt with (1  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 21.833 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 22.478 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 23.660 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 25.020 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 26.046 as node 2 sent a pkt with (2  1  0  2)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 26.263 as node 3 sent a pkt with (4  3  2  0)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate0(struct rtpkt *) is called at time t=: 26.685 as node 1 sent a pkt with (1  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|   20     4    10
dest 2|   21     3     9
     3|   23     5     7
At time t=10000.000, node 0 sends packet to node 1 with: (0  4  3  5)
At time t=10000.000, node 0 sends packet to node 2 with: (0  4  3  5)
At time t=10000.000, node 0 sends packet to node 3 with: (0  4  3  5)
linkhandler1() called at time t=10000.000 for link to 0 with new cost 20
             via   
   D1 |    0     2 
  ----|-----------
     0|   20     3
dest 2|    3     1
     3|    5     3
At time t=10000.000, node 1 sends packet to node 0 with: (3  0  1  3)
At time t=10000.000, node 1 sends packet to node 2 with: (3  0  1  3)
rtupdate1() called at time t=10000.242 from 0 with (0 4 3 5)
             via   
   D1 |    0     2 
  ----|-----------
     0|   20     3
dest 2|    3     1
     3|    5     3
No change in min costs, no packets sent
rtupdate3() called at time t=10000.247 from 0 with (0 4 3 5)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 10001.114 as node 1 sent a pkt with (3  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|   20     4    10
dest 2|   21     3     9
     3|   23     5     7

Minimum cost didn't change. No new packets are sent
rtupdate2() called at time t=10001.498 from 0 with (0 4 3 5)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
No change in min costs at node 2, no packets sent
rtupdate2() called at time t=10001.946 from 1 with (3 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
No change in min costs at node 2, no packets sent
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7
At time t=20000.000, node 0 sends packet to node 1 with: (0  1  2  4)
At time t=20000.000, node 0 sends packet to node 2 with: (0  1  2  4)
At time t=20000.000, node 0 sends packet to node 3 with: (0  1  2  4)
linkhandler1() called at time t=20000.000 for link to 0 with new cost 1
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    5     3
At time t=20000.000, node 1 sends packet to node 0 with: (1  0  1  3)
At time t=20000.000, node 1 sends packet to node 2 with: (1  0  1  3)
rtupdate3() called at time t=20000.834 from 0 with (0 1 2 4)
             via     
   D3 |    0     2 
  ----|-----------
     0|    7     4
dest 1|    8     3
     2|    9     2
No change in min costs at node 3, no packets sent
rtupdate0(struct rtpkt *) is called at time t=: 20000.994 as node 1 sent a pkt with (1  0  1  3)
                via     
   D0 |    1     2    3 
  ----|-----------------
     1|    1     4    10
dest 2|    2     3     9
     3|    4     5     7

Minimum cost didn't change. No new packets are sent
rtupdate2() called at time t=20001.162 from 0 with (0 1 2 4)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
No change in min costs at node 2, no packets sent
rtupdate1() called at time t=20001.266 from 0 with (0 1 2 4)
             via   
   D1 |    0     2 
  ----|-----------
     0|    1     3
dest 2|    3     1
     3|    5     3
No change in min costs, no packets sent
rtupdate2() called at time t=20001.492 from 1 with (1 0 1 3)
                via     
   D2 |    0     1    3 
  ----|-----------------
     0|    3     2     6
dest 1|    4     1     5
     3|    7     4     2
No change in min costs at node 2, no packets sent

Simulator terminated at t=20001.492188, no packets in medium
Minimum cost from 0 to other nodes are: 0 1 2 4
Minimum cost from 1 to other nodes are: 1 0 1 3
Minimum cost from 2 to other nodes are: 2 1 0 2
Minimum cost from 3 to other nodes are: 4 3 2 0