## Problem

https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph

## Solution

- Use BFS and keep pair of each node and its parent and check if any point if node's child is already visited but it is not node 's parent so it means cycle exist and any other node already visited that node thus creating a cycle.
- If graph is broken into multiple components then we call the same func for each component and check if any component has cycle or not.

## Time Complexity

O(N + 2E) + O(N), Where N = Nodes, 2E is for total degrees as we traverse all adjacent nodes. In the case of connected components of a graph, it will take another O(N) time.

## Space Complexity

O(N) + O(N) ~ O(N), Space for queue data structure and visited array.
