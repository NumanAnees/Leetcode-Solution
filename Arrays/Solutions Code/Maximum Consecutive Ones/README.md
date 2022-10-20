## Problem

**https://leetcode.com/problems/max-consecutive-ones/submissions/**

## Solution

- maintain two variables(current_max nd largest_max).
- if current number is 1 increase the current_max and when 0 arrive check if current_max>largest_max.
- Post condition is mandatory in case of test-case `[1,1,0,1,1,1]`. Program should return 3 not 2.
