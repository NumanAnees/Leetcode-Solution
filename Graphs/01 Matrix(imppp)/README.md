## Problem

https://leetcode.com/problems/01-matrix/

## Solution

- Use BFS approach and for each element count number of steps.

## Time complexity

O(NxM + NxMx4) ~ O(N x M)

## Space complexity

O(N x M) + O(N x M) + O(N x M) ~ O(N x M)
O(N x M) for the visited array, distance matrix, and queue space takes up N x M locations at max.
