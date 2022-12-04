## Problem

https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bottom-view-of-binary-tree

## Solution

- Just same like the Top View of Binary tree but instead of returning 1st node of each line return the last node.
- So when any node come we check if it present in map or not if it present we overwrite otherwie we add it in the map.

## Recursive Implementation

Recursive implementation is not possible without keeping in mind the height...

## TC

`O(n)` in skew `O(nlogn)`, just imagine a skewed tree where every node has to be put into the `ordered map` and every insertion in ordered map costs `O(logn)`.

## SC

`O(n)`

## Video

https://www.youtube.com/watch?v=0FtVY6I4pB8
