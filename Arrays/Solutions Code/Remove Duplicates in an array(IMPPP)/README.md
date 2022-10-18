## Problem

**https://leetcode.com/problems/remove-duplicates-from-sorted-array/**

## Solution

- We have to solve this problem in space complexity of O(1).
- We are returning k which will tell the compiler arr[0-k] is range of unique values.
- So, to solve this without any extra space we have to

## Dry Run

initial: [1,1,2,4,6,6,7,7,8,8,8,8]
iteration#1:[1,1,2,4,6,6,7,7,8,8,8,8] i = 2, k = 1
iteration#2:[1,`2`,"2",4,6,6,7,7,8,8,8,8] store arr[k] = arr[i], i = 3 and k = 2, **no replacing just storing**.
iteration#3:[1,2,'4',"4",6,6,7,7,8,8,8,8] store arr[k] = arr[i], i = 4 and k = 3, **no replacing just storing**.
iteration#4:[1,2,4,'6',"6",6,7,7,8,8,8,8] store arr[k] = arr[i], i = 5 and k = 4 , **no replacing just storing**.
iteration#4:[1,2,4,6,'7',6,"7",7,8,8,8,8] store arr[k] = arr[i], i = 7 and k = 5 , **no replacing just storing**.
iteration#4:[1,2,4,6,7,'8',7,7,"8",8,8,8] store arr[k] = arr[i], i = --- and k = 6 , **no replacing just storing**.

**So,**
`Loop complete the last value of k = 6 which is [1,2,4,6,7,8]`.
