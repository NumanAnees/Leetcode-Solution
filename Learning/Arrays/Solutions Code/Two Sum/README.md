# Problem

Given an array of integers **nums** and an integer **target**, return indices of the two numbers such that they add up to **target**.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice.

You can return the answer in any order.

## Example 1:

```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

### Follow-up:

Can you come up with an algorithm that is less than O(n2) time complexity?

# Solution

I have to do it in less than O(n\*n). If i try to add first all elements in unordered_set then there is a problem.

### Example

```
target: 10
array: [5,6,7,8]
```

### Explanation

It will return true because 5 was already present so we should not add all elements in unordered_set.Right approach is to use unordered_map not set because we want index not the actual values.
