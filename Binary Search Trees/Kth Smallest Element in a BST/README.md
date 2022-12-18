## Problem

https://leetcode.com/problems/kth-smallest-element-in-a-bst/

## Solution

- Inorder traversal of BST is in sorted order.
- Make a ans sorted array using InOrder traversal and return `ans[k-1]` for kth smallest and `ans[n-k-1]` for kth largest.
