## Problem

https://leetcode.com/problems/combination-sum/

## Solution

- Just use pick and non pick approach using recursion...
- Note that insert in array is a O(n) operation..

## TC

O((2 power t)\*k)

- t not n because we can pick each element multiple times not only once so pick non pick of n is 2 power n. Here t is number of times we picked the element [Exponentional not linear TC].
- Assume K is avg length, K time for putting each array in a 2D array.

## SC

O(k\*x) where k is avg length of each combination and x is the number of combinations.
