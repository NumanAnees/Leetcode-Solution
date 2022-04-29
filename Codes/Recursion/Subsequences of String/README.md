# Problem

**https://www.codingninjas.com/codestudio/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16**

# Solution

- Start from index 0 to Array.size().
- Exclude 1 time (Just increase index by 1).
- Include 1 time (Increase index by 1 and add the element to output array).
- When base case hits just add the output array to ans array which is a 2d array.
- According to the problem output should not include " " an empty string so just add the output array to the ans 2d array when length is > 1.
