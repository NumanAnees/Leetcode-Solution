## Problem

https://leetcode.com/problems/kth-largest-element-in-an-array/

## Solution

- For finding kth largest use minHeap which is `priority_queue<int, vector<int>, greater<int>>`.
- Create a k size minHeap of k large elements. As root is smallest in minheap so we can say that kth largest is at root.

## TC

O(nlogk)

## SC

O(k)
