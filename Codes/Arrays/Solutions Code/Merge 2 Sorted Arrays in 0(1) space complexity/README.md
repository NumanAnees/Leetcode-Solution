# Problem

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

## Example 1:

```
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
```

## Note:

`Can you come up with an algorithm that runs in O(m + n) time?`

# Solution

Using two pointer approach check if arr1 is less or greater than arr2 if it is greater then just swap the numbers and now you have to sort the arr2. It is not necessary to sort arr1 because both arrays are alreade sorted and if arr1[0] is greater than arr[0] then it is obvious that the next elements of arr1 are also greater than arr2[0].
`Algo 's time complexity is O(m+n) while space complexity is O(1)`

### Other better approach is using a gap method.

`gap = (arr1.size() + arr2.size())/2`

### In next iteration gap will become:

`gap=gap/2;`
