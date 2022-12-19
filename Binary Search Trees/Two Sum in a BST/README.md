## Problem

https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

## Solution

- We keep a set to remember the previous elements in the tree.
- While traversing the tree, if we saw already k - root->val, then we have a two sum, return true.
- Otherwise, insert val into set and keep traversing.
