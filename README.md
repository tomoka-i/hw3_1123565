# hw3_1123565

## Tomoka 1123565

## Question 1
Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere.

Examples:
Input:
Enter the number of nodes: V = 7
Enter the number of edges: E = 7
Enter the edges: 
0 3
0 4
0 5
1 2
2 4
3 6
5 6

Output:
[[3, 4, 5], [2], [1, 4], [0, 6], [0, 2], [0, 6], [3, 5]]

Explanation:
Node 0 is connected to 3, 4 and 5.
Node 1 is connected to 2.
Node 2 is connected to 1 and 4.
Node 3 is connected to 0 and 6.
Node 4 is connected to 0 and 2.
Node 5 is connected to 0 and 6.
Node 6 is connected to 3 and 5.

## Question 2
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.

Examples:
Input:
Enter the number of nodes: 11
Enter the adjacency list (the input is split based on newline characters):
2 1 3
0
0 5 4 6
0 8 7
2 10
2
2
3
3 9
8
4

Output:
[0, 2, 1, 3, 5, 4, 6, 10, 8, 7, 9]
