# Depth First Search

This program inputs a graph and transverses through it in depth first manner.
For a graph with **V** vertices and **E** edges, depth first search has a running
 time of O(V+E).

# Input Format
* The input consists of E+1 lines
* The first line contains two the value of V, the total number of vertices and E,
the total number of edges.
* The next E lines contain two space separated integers which define an edge from
first vertex to the second one.

# Output Format

* A single line showing order of vertices when graph is
transversed in depth first manner.

# Sample Input
```
8 10
1 2
1 3
1 4
1 5
2 6
3 6
4 7
5 7
6 8
7 8
```
# Sample Output
```
1 2 6 8 3 4 7 5
```

# Implemented in:
* [C](depth_first_search.c)
