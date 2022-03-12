# Problem

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

## Example 1:

```
**Input:** nums1 = [1,2,2,1], nums2 = [2,2]
**Output:** [2]
```

## Example 2:

```
**Input:** nums1 = [4,9,5], nums2 = [9,4,9,8,4]
**Output:** [9,4]
Explanation: [4,9] is also accepted.
```

# Solution

First put all the elements of an array in an **unordered_set**. Next step is to find each element of 2nd array in unordered_set if it is present then store it in another unordered_set because we want only **unique** intersecting elements not the repeating ones.
