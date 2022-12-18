## Problem

https://leetcode.com/problems/delete-node-in-a-bst/

## Solution

- Find the target node but stop on it's parent.
- call helper function in a way the parent 's new left/right is target node 's left/right.
- cut connection of right part and place it in the lastRight part of left.
