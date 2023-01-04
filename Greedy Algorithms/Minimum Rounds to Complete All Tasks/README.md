## Problem

https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/

## Solution

- Count elements and store in map.
- If count is 1 then return -1.
- If count is `count%3==0` then `count+=freq/3`.
- If count is `count%3==1` then `count+=freq/3 + 1` +1 is for last extra pair `[3,3,2,2]`.
