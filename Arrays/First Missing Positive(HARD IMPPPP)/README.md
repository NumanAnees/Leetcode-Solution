## Problem

https://leetcode.com/problems/first-missing-positive/

## Solution

- Use array as a hashmap becuse we have to solve this in O(n) time and O(1) space.
- if not in range(1-n) store 1.
- if in range mark (-ve)
- check first +ve
