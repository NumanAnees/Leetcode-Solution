## Problem

- **https://leetcode.com/problems/valid-anagram/**

## Solution

`Anagram means having same frequency of characters like a 2 times ,b 10 times etc`

- Simple add every character of s to hashmap and increase count.
- Next, remove every character t from hashmap and decrease count.
- Now check for every character of hashmap if count is 0 or not(can be -1 too)....
