## Problem

https://leetcode.com/problems/delete-node-in-a-bst/

## Solution

- Find the target node.
- return left if right is null and right if left is null.
- if both present replace root->data with the leftmost child of right subtree and then delete that duplicat child because it is easy to delete a leaf node.
