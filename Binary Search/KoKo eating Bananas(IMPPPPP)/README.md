## Problem

https://leetcode.com/problems/koko-eating-bananas/submissions/

## Solution

- We know that our ans will lie between the range 1-max(piles).
- So apply binary search on that range by calculating number of hours for mid.
- if hours<=h means you can decrease speed because you have to return smallest speed.
- else you have to increase the speed so select the right part.
