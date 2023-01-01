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

It will return true because 5 was already present so we should not add all elements in unordered_set.Right approach is to use unordered_map not set because we want index not the actual values. `umap can be <int,int>`

## Time Complexity

`O(1)` for umap to insert. So, time complexity will be linear `O(n)` and space complexity is also `O(n)`.

- The best case, average case, and worst case time complexity of all the operations in an unordered_map are O(1), O(1), and O(n), respectively. While in the case of a map, the time complexity of all the operations is O(log(n)) in all the cases (Best, Average and Worst).
- Worst case in umap is when many collisions.
