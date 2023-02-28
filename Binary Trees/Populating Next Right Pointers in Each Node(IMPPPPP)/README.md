## Problem

https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

## Solution

- Apply BFS without queue, just start from left most node of each level and connect it with right then move to next.
- When you reach end move to left most node of next level.
- We can only apply this if the tree is perfect binary tree.
