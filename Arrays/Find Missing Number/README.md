## Problem

**https://leetcode.com/problems/missing-number/**

## Solution

- We want missing number and we have n(length of vector).
- Just find expectation-> sum of N numbers with formula n\*(n+1)/2.
- Subtract expectation - current and return the ans.
