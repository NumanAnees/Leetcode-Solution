## Problem

- **https://leetcode.com/problems/rotate-list/**

## Solution

- Just like rotate array `find k = k mod length`.
- Now while `k < Length` move head to next and keep a tail pointer at head-1.
- **Remember to join tail with head otherwise solution of 1,2,3,4,6 where k=2 will be 4,6 only**.

- In case of -ve k we can do length+k=>5+2.
