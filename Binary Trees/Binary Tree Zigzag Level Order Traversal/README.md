## Problem

**https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/**

## Solution

- Use the same approach we used in level order traversal(BFS).
- Use a flag varibale `leftToRight` if it is true then `index = i` otherwise `index = size-1-i` and do `row[index] = node->val`.
