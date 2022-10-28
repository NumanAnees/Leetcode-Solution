## Problem
- **https://leetcode.com/problems/rotate-string/**
## Solution
```
Assume Input: s = "abcde", goal = "cdeab"
Output: true
```
- Find where is last character of s string in target string at 2 index.
- Now, s.length() is 5 but last index is 5-1=4...
- DO 4-2 you will get K(number of shiftes to the right....)