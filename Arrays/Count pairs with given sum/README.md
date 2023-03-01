## Problem

https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

## Solution

- Create a map to store the frequency of each number in the array.
- Check if (sum – arr[i]) is present in the map, if present then increment the count variable by its frequency.
- After traversal is over, return the count.

## Note

for non repeating values in array use count++;
for repeating values in array use count += m[k - arr[i]]; or multiply 2(non repeating values 's pairs).
