# Problem

Given a string str. The task is to find the **maximum occurring character** in the string str. If more than one character occurs the maximum number of time then print the **lexicographically**(just achieved by not using '=' sign) smaller character.

## Example 1:

```
Input:
str = testsample
Output: e
Explanation: e is the character which is having the highest frequency.
```

### Expected Time Complexity: O(N).

### Expected Auxiliary Space: O(Number of distinct characters).

# Solution

Initialize 26 length char array with **0** and then check and increment this value whenever same number occurr. At last find maximum from that 26 length array.
