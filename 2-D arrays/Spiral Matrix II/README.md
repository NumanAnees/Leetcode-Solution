## Problem

https://leetcode.com/problems/spiral-matrix-ii/

## Solution

- We have to fill the matrix layer by layer in four direction.
- From left to right ➡️:
  - the row will remain constant while column is updated till reaches n-1.
- From Top to bottom ⬇️(moving down)
  - The column will remain constant as n-1 and we will start filling from r1 + 1, as first row is filled in previous step & row will be updated.
- From right to left ⬅️
  - we will start filling from c2 - 1 because c2 is filled in previous step.
  - so the row will be fixed and c2 will be updated from c2-1 till its greater than c1.
- From botom to up ⬆️ (move up)
  - the column will be fixed as c1 while row will be updated form r2 till it greater than r1.
  - After that we will updates the row and column pointers, as now we will have to fill the inner layers.

## ANALYSIS -:

**TIME COMPLEXITY** = O(N^2)
**SPACE COMPLEXITY** = O(1)
