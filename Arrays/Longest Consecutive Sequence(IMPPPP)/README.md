## Problem

- **https://leetcode.com/problems/longest-consecutive-sequence/**

## Solution

- Find minimal number by checking if --num exists or not so you can do this in O(n) otherwise if you dont check it will give answer in O(n\*n).

- O(n) for adding in set, O(n) for iterations you do on array for finding --num and a while loop for checking how many consecutive numbers exists. so, `O(3n)`.
