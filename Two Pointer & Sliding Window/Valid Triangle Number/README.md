## Problem

https://leetcode.com/problems/valid-triangle-number/

## Solution

- Sort the array
- take arr[n-1] value as c and low=0 as a and high=c-1 as b.
- if a+b>c it means in range from low to high condition remain true for all so, ans=ans+high-low(count of total number). and decrease the high
- if false then increase the low number ++.
