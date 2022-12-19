## Problem

https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

## Solution

- First check if p is parent of q or not. if it is return p.
- Then check if q is parent of p or not. if it is return q.
- If both false then ensure that by swapping p-> is always less than q->val. After that just find a node with value greater than p and less than q.
