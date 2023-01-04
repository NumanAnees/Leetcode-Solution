## Problem

https://leetcode.com/problems/coin-change/submissions/

## Solution

- The array dp is initialized to Max except first element which is initialized to 0.
- After completion of iteration, after every i iteration completion, dp[i] represents the minimum denomination to reach amount i if dp[i] is not max.

## TC

O(n\*amount)

## SC

O(amount)
