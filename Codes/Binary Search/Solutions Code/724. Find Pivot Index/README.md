# Problem

Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

# Solution

As we have to find leftMost pivot index so, subtract newSum from oldSum and also the current index value by this it is easy to find that what is at leftSub array and what is at rightSub Array.
`let sum of arr[10] = 100;`
for finding what is the sum of leftSub array at index 3
`0+10+10+10 = 30 from loop addition`
for finding what is the sum of rightSub array at index 3
`100-30-10 = 60`
