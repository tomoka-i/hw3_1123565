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

## Question 3
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Depth First Traversal (DFS) starting from vertex 0, visiting vertices from left to right as per the adjacency list, and return a list containing the DFS traversal of the graph.
Note: Do traverse in the same order as they are in the adjacency list.

Examples:
Input:
Enter the number of nodes: 12
Enter the adjacency list (the input is split based on newline characters):
1 2 3
0 4
0 5 6
0 7
1 8 9
2 9
2 10 11 7
3 6
4
4 5
6
6

Output:
[0, 1, 4, 8, 9, 2, 5, 6, 10, 11, 7, 3]

Explanation: 
Starting from 0, the DFS traversal proceeds as follows: 
Visit 0 → Output: 0 
Visit 1 (the first neighbor of 0) → Output: 0, 1 
Visit 4 (the first neighbor of 1) → Output: 0, 1, 4
Visit 8 (the first neighbor of 4) → Output: 0, 1, 4, 8
Backtrack to 4 and visit 9 (the second neighbor of 4) → Output: 0, 1, 4, 8, 9
Backtrack to 0 and visit 2 (the second neighbor of 0) → Output: 0, 1, 4, 8, 9, 2
Visit 5 (the first neightbor of 2) → Output: 0, 1, 4, 8, 9, 2, 5
Backtrack to 2 and visit 6 (the second neighbor of 2) → Output: 0, 1, 4, 8, 9, 2, 5, 6
Visit 10 (the first neighbot of 6) → Output: 0, 1, 4, 8, 9, 2, 5, 6, 10
Backtrack to 6 and visit 11 (the second neighbor of 6) → Output: 0, 1, 4, 8, 9, 2, 5, 6, 10, 11
Backtrack to 6 and visit 7 (the third neighbor of 6) → Output: 0, 1, 4, 8, 9, 2, 5, 6, 10, 11, 7
Backtrack to 0 and visit 3 and visit (the third neighbor of 0) → Final output: 0, 1, 4, 8, 9, 2, 5, 6, 10, 11, 7, 3


## Question 4
Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. The graph is represented by an adjacency list, where each element adj[i] is a vector containing vector of integers. Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer denoting the weight of the edge.

Examples:
Input:
V = 6
E = 8
Enter the adjacency list:
0 1 2
0 2 1
0 3 5
1 2 6
1 4 4
2 5 10
3 5 8
3 5 9

Output:
The sum of the weights of the edges: 20

