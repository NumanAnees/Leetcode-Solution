## Problem

https://www.educative.io/courses/coderust-hacking-the-coding-interview/jRK0W

## Solution

This solution is based on the 3SUM problem. Here is an overview of the approach where we try to find any elements matching the criteria a^2 + b^2 = c^2.

- Sort the list of integers.
- Iterate the list from start to end.
- Select the current element as c and take its square, that is c^2.
- use i j k where i is iterator k is end and j is start. also i is c^2 where j and k are a^2,b^2.

## TC

O(nlogn) + O(n\*n)

## SC

only sorting
