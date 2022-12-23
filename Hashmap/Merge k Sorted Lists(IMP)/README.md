## Problem

https://leetcode.com/problems/merge-k-sorted-lists/

## Solution

We can store the values of all the nodes in an ordered map, with the second value as the frequency and after going over all the nodes of all the linked lists, simply iterate over that map and keep creating new ListNodes for every value (depending on the frequency).

## TC

O((n*k)log(n*k))

- n\*k total elements where n arrays and k is avg length of each.
- log(n\*k) for each element to put in map.
