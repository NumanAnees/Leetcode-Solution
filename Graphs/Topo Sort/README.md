## Problem

https://practice.geeksforgeeks.org/problems/topological-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=topological-sort

## Soltion

- Node will be marked as visited immediately after making the DFS call and before returning from the DFS call, the node will be pushed into the stack.

## Time Complexity:

O(V+E)+O(V), where V = no. of nodes and E = no. of edges. There can be at most V components. So, another O(V) time complexity.

## Space Complexity:

O(2N) + O(N) ~ O(2N): O(2N) for the visited array and the stack carried during DFS calls and O(N) for recursive stack space, where N = no. of nodes.
