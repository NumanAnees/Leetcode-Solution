## Problem

https://leetcode.com/problems/3sum/

## Solution

- `Bruteforce`: use 3 loops `i,j=i+1,k=j+1`
- `Better`: use a hashmap and a set data structure.
- `Optimal`: Using 2 pointer approach.
- In this approach `sort array` and fix i and find `sum=0-i` where `low+high=sum`.
- if same then move to next.

## Time Complexity

- For sort `O(nlogn)` then two loops `O(n*n)`.
- `TC = O(n*n)+O(nlogn)`

## Space Complexity

`No extra space`
