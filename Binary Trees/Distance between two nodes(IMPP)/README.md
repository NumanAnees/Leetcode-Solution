## Problem

https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1

## Solution

1. Find the LCA. Because the shortest distance will have to pass through the LCA.
2. Get the distance of both nodes from the LCA.
3. Add the distance and return it as the answer.

## Time complexity:

$O(N)$
In case of a skew tree.

## Space complexity:

$O(N)$
Recursion stack space in case of a skew tree.

https://www.youtube.com/watch?v=6DraIPN_0no
