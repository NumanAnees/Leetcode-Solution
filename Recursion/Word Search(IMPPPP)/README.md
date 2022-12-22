## Problem

https://leetcode.com/problems/word-search/

## Solution

## Time Complexity

O(m*n*4powerk)

- Worst case we are calling search func in m\*n times.
- 4 power k times because k is the height of tree and each node of recursive tree has 4 childs.
- SO, we can say that tree will have 4 power k number of nodes.

## Space Complexity

O(k)

- Here k is word size like "iceberg". So, max stack size of recursion in memory is of k.
