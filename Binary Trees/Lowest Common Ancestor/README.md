## Problem

https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

## Solution

Use DFS traversal(Recursive DFS InOrder traversal) first go to left and then go to right.

- If the root node is only one the node which you are looking for then return root
- If both left and right returns null then returns null
- If left returns a node and right returns null then return left and vice versa (Return something which gives u node)
- If both returns you the nodes then u have found the answer so return root

## TC

`O(n)`

## SC

`O(n) Auxilary stack space worst case`

## Follow up

What if same value node?
