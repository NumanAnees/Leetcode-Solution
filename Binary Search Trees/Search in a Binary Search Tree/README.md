## Problem

**https://leetcode.com/problems/search-in-a-binary-search-tree/**

## Iterative Solution

- `While root!=NULL and root->val!=val` change the value of root according to left subtree movement or right subtree movement.
- When condition false and loop ends simply return the `root`.

## Recursive Solution

- If root is null return null.
- If `root->val != val` ,search in `left` and `right`.
- Otherwise this would be required node and we would return it.
