## Problem

https://practice.geeksforgeeks.org/problems/count-of-distinct-substrings/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=Count+of+distinct+substrings

## Solution

- Can be done with 2 for loops and set data structure also.
- To reduce space complexity we are using Trie here.
- aba,abas in trie is O(4).

## Time Complexity:

- O(n2), because we have to go through the entire string for all possible different starting points in order to generate all the substrings.

## Space Complexity:

- O(n2), because in the worst case, all the substrings can be distinct and there will be a node for every substring. Number of substrings of a string of length n is (n \* (n + 1) / 2). Hence in the worst case, space complexity will be O(n2).
