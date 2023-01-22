## Problem

https://leetcode.com/problems/partition-labels/

## Solution

- Store character and its last occurance index in a umap.
- maintain a size and last variable. Where size points to partition size and last points to last occurence of all character in the partition. Update the last as you go.
- When index `i` becomes equals to `last` then simply add the partition `size+1` in the ans output array.
- Here +1 is because size starts from 0 index.
- last store maximum of current last occurence from map and old last value.
