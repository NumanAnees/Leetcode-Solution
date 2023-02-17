## Problem

https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-undirected-graph

## Solution

The shortest path in a directed acyclic graph can be calculated by the following steps:

- Perform topological sort on the graph using BFS/DFS and store it in a stack.
- Now, iterate on the topo sort. We can keep the generated topo sort in the stack only, and do an iteration on it, it reduces the extra space which would have been required to store it. Make sure for the source node, we will assign dist[src] = 0.
- For every node that comes out of the stack which contains our topo sort, we can traverse for all its adjacent nodes, and relax them.
- In order to relax them, we simply do a simple comparison of dist[node] + wt and dist[adjNode]. Here dist[node] means the distance taken to reach the current node, and it is the edge weight between the node and the adjNode.
- If (dist[node] + wt < dist[adjNode]), then we will go ahead and update the distance of the dist[adjNode] to the new found better path.
- Once all the nodes have been iterated, the dist[] array will store the shortest paths and we can then return it.
