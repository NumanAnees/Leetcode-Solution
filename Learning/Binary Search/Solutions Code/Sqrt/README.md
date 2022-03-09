# Problem

Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

`Input: x = 4 Output: 2`

# Solution

Apply Binary Search with start of 0 and end at x integer. For decimal part add 0.1 and 0.01 in next iteration of answer.
