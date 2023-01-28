## Problem
- **https://leetcode.com/problems/find-peak-element/**
## Solution
- Apply binary search but remember mid not mid+1 or mid-1....
- Use left and right, if `arr[mid]<arr[mid+1]` then we move our left to mid+1 and else we move right to mid(inclusive) because our ans in this range.
