## Problem

https://leetcode.com/problems/next-permutation/

## Solution

**We can see every sequence has increasing order. Hence, our approach aims to get a peak from where the increasing sequence starts. This is what we achieve from our first step of the approach**

- Linearly traverse array from backward such that ith index value of the array is less than (i+1)th index value. Store that index in a variable `k`.
- If the index value received from step 1 is less than 0. This means the given input array is the largest lexicographical permutation. Hence, we will reverse the input array to get the minimum or starting permutation.
- Else do the Linearly traversal from backward. Find an index that has a value greater than the previously found index and swap both.
- In the end just reverse from k+1 to end.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Link

https://takeuforward.org/data-structure/next_permutation-find-next-lexicographically-greater-permutation/
