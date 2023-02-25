## Problem

https://leetcode.com/problems/palindrome-partitioning

## Solution

- Use recursion and check on each index if we make a cut from index to i(starts from index). if it is palindrome then push in temp array and call recursion for index+1 and in last backtrack.
