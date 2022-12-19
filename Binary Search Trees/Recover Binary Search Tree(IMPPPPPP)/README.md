## Problem

https://leetcode.com/problems/recover-binary-search-tree/

## Solution

- We know InOrder traversal of a BST is a sorted array.
- In this case the array will be sorted but just 2 elements will be misplaced.
- find those 2 elements and swap them using firs,middle,last and prev pointers.
- if `[1,2,9,6,3]` replace `9` with `3` to make it sorted. Replace first(middle-1) with last.
- if `3,4,8,6,10,12` replace `8` with `6`. Both comes together so there will be no last in this case.
  - just swap the middle value and root value.
