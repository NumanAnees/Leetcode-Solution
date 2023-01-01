## Problem

- **https://leetcode.com/problems/isomorphic-strings/**

## Solution

- Just use 2 unorderedmaps.
- Ensure using these maps that if s[i] is key already present then it also points same value t[i]. `t[i]=sumap[s[i]]`. and `s[i]=tumap[t[i]]`.
