## Problem

https://leetcode.com/problems/maximum-product-subarray/

## Solution

Like kadane's algorithm we calculate the max ending here at each index;
Max ending at index i could be:

- min ending at previous index _ nums[i] (if min is negative, negative _ negative can yield a max value)
- max ending at previous index _ nums[i] (positive _ positive)
- nums[i]

Min ending at index i could be:

- min ending at previous index \_ nums[i] (if nums[i] is positive this can yield a bigger negative)
- max ending at previous index \_ nums[i] (if nums[i] is negative and min ending at previous index is postive, this could yield a new minimum)
- nums[i]
