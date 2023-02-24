## Problem

https://leetcode.com/problems/longest-common-subsequence

## Solution

- Make a 2d vector by default initialized with 0. remember `int[i][j]={1}` only initialize 1st value as 1 and other as 0.
- start from `[1][1]` and if same `dp[i][j]` will be `dp[i-1][j-1]+1` otherwise max of `dp[i-1][j],dp[i][j-1]`.
- Here we only return number not string....
