## Problem

- **https://leetcode.com/problems/top-k-frequent-elements/**

## Solution

- Easy approach just using a hashmap....
- Step1: store all values in a hashmap and get count of each.
- Step2: we have to find k large values not kth largest so do not sort the hashmap bcoz of complexity O(nlogn).
- Step3: instead sorting find largest and change its count to 0 and decrease the k--....

#### Time Complexity

- O(k\*n)

#### Space Complexity

- O(n)
