# Problem

Let's call an array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
`arr[0] < arr[1] < ... arr[i-1] < arr[i]`
`arr[i] > arr[i+1] > ... > arr[arr.length - 1]`
Given an integer array arr that is guaranteed to be a mountain, return any i such that `arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].`

## Constraints:

3 <= arr.length <= 104
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.

`Follow up: Finding the O(n) is straightforward, could you find an O(log(n)) solution?`

# Solution

An easy approach is to check from mid if it is greater than both left and right indexes.
if it would so then it is the right answer otherwise from given conditions of mountain choose left or right part of array.
