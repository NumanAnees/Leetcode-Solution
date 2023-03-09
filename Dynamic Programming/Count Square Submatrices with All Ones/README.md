## Problem

https://leetcode.com/problems/count-square-submatrices-with-all-ones/

## Solution

- each i,j location of matrix will tell how many squares ending at that i,j position.
- take minimal of left,top and top-left diagonal and add 1 bcoz matrix[i][j] was 1 and 1 is a single square.
