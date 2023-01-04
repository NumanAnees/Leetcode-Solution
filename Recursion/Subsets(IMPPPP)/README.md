# Problem

**https://leetcode.com/problems/subsets/**

# Solution

- Start from index 0 to Array.size().
- Exclude 1 time (Just increase index by 1).
- Include 1 time (Increase index by 1 and add the element to output array).
- When base case hits just add the output array to ans array which is a 2d array.
