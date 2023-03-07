## Problem

https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

## Solution

- Count total nodes and return node at location `count-k`.

## Solution 2

- We’ll use two pointers to find the nth from the last node:
- The idea is to have two pointers n nodes apart: one pointing to the head, and the other pointing to the nth node.
- Then, we move both pointers forward until the second pointer reaches the tail.
- Now, the first pointer points to the nth node from last. If we reach the tail and both pointers are no longer n nodes apart, that means n is larger than the size of the list, and we may return null.
- Let’s look at the list below where we want to find the third last node (n = 3):
