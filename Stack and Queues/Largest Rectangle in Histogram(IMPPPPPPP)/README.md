## Problem

- **https://leetcode.com/problems/largest-rectangle-in-histogram/**

## Solution

- Find the left smaller for each element and put in leftSmallArray.
- Find the right smaller for each element and put in rightSmallArray.
- Apply the formula for each and find max....
- reference: **https://takeuforward.org/data-structure/area-of-largest-rectangle-in-histogram/**

## MySolution

- Find largest and its index.
- Find prev and forward and divide into 2 parts 0-max-1 and m+1-n-1;
- Now in these two parts find number of occurences greater or equal to forward nd prev.
