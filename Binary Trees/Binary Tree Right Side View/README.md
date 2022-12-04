## Problem

**https://leetcode.com/problems/binary-tree-right-side-view/**

## Solution

The demand of the question is to get the nodes at i level that are rightmost.

Any nodes left to that would not be included in answer.

**Level order traversal could help but that uses addtional space for the QUEUE**

**APPROACH with no extra space**

Maintain an array / vector.

- TRAVERSAL -> **ROOT** ->**RIGHT** -> **LEFT** This is the way traversal is done in array so that rightmost node at `i` level is visited first.

- When at `i` level, check in array/vector, if there is an element already present at index `i` in the array.[ index represents the level in tree ]->`[element at index i is rightmost node at level i]`

- If at that level, element is present,, just continue the traversal.

- Else if no element is present at index `i` -> add that node to answer `[res]` at the `i` index.
