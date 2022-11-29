## Problem

- **https://leetcode.com/problems/roman-to-integer/**

## Solution

- Use a umap where store all values and symbols.
- Now check if `s[i]<s[i+1]` true then ans-s[i] otherwise ans+s[i]====>no need to mul with 10\*pos here in case of roman....:)
