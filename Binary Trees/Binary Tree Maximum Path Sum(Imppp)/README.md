## Problem

**https://leetcode.com/problems/binary-tree-maximum-path-sum/**

## Solution

- Bruteforce solution in O(n\*n) is to find depth sum for each root.
- Optimized solution in O(n) is like finding the diameter of tree keeping a maxi variable and using formula `(node->val)+max(rhSum,lfSum)` instead of height formula `1+max(lf,rh)`.
