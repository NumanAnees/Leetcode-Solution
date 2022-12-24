## Problem

https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph

## Solution

The intuition is that we start from a source and go in-depth, and reach any node that has been previously visited in the past; it means there’s a cycle.

## Time Complexity

O(N + 2E) + O(N), Where N = Nodes, 2E is for total degrees as we traverse all adjacent nodes. In the case of connected components of a graph, it will take another O(N) time.

## Space Complexity

O(N) + O(N) ~ O(N), Space for recursive stack space and visited array.
