## Problem

https://leetcode.com/problems/validate-binary-search-tree

## Solution

- Very simple and important just `compare root value with parent(for first root INT_MIN and INT_MAX)`.
- Do not compare root childs with root because then you have to apply extra checks.
- Remember every value in left subtree should be less and every value in right subtree should be greater than root.
