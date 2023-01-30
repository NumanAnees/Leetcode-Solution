## Problem

https://leetcode.com/problems/find-all-anagrams-in-a-string/

## Solution

- Create a temp string (a copy of p) and whenever find character which is a part of temp string remove that character from temp.
- Run a forLoop till length of temp and check at the end if temp == 0 or not if it is then push the index in the ans array.
