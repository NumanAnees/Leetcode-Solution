## Problem

**https://leetcode.com/problems/same-tree/**

## Solution

- Use any traversal approach like inOrder,preOrder,postOrder etc.
- Just check if root values are same or not and then check `if p->left , q->left and p->right,q->right` respectively returns true or not.
- The base case will be if `p or q == NULL` then check if both null or not if both NULL return true otherwise return false using this `return p==q`
