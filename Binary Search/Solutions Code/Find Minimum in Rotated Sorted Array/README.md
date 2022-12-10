## Problem

https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

## Solution

- if `nums[start]` is less than `nums[end]` means part is not rotated. our min will be `nums[start]`.
  - for example: `[0,1,2,4,5,6,7]`
- if `nums[mid]` is larger than `nums[end]` then min is in right side.
  - for example: `[4,5,6,7,0,1,2]`
- else if `nums[mid]` is smaller than `nums[end]` then min is on left (**mid is also included bcoz it is also a smaller element of right sorted part**).
  - for example: `[11,13,15,17,21]`
