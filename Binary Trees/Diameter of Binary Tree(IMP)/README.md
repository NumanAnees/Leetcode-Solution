## Problem

**https://leetcode.com/problems/diameter-of-binary-tree/**

## Solution

- Bruteforce approach is in O(n\*n). For each node find the left subtree height and right subtree height and use `lf+rh` to return max depth.
- Optimized approach is in O(n). For each node just find the height using `1+max(rh+lf)` but pass an extra variable maxi which will store max value of `rh+lf`.
