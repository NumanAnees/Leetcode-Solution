## Problem

https://leetcode.com/problems/number-of-provinces/

## Solution

- Create an adjacency list from adjacency matrix.
- Create a visited array.
- Call DFS where visited is 0 and count how many times you are calling dfs.

## Time Complexity

O(N) + O(V+2E), Where O(N) is for outer loop and inner loop runs in total a single DFS over entire graph, and we know DFS takes a time of O(V+2E).

We are calling dfs for all but total in n times of array. So, we only compute how many time inner loop is going to run? O(V+2E) times.

## Space Complexity

O(N) + O(N),Space for recursion stack space and visited array.
