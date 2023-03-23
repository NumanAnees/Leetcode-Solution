## Problem

https://leetcode.com/problems/longest-palindrome/

## Solution

- Just use hashmap and check if the count is even or odd.
- if even then ans=ans+count.
- if odd then ans=ans+count-1 and odd++.
- in the end if(odd>0) ans++; //single odd added
