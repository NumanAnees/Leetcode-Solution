## Problem

https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

## Solution

- Use Parent unordered_map and visited unordered_map.
- Do BFS traversal for marking parents.
- Do BFS traversal till curr_level==K.
- After break statement nodes in our queue are our ans.
