## Problem

https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

## Solution

- Just use the same approach of maxHeap but merge step1 and step2 in a single for loop.
- Push till `pq.size()<k`.

## Time complexity

O(nlogk)

## Space complexity

O(k)
