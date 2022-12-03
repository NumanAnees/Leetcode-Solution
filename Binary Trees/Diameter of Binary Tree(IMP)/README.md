## Problem

**https://leetcode.com/problems/diameter-of-binary-tree/**

## Solution

- Bruteforce approach is in O(n\*n). For each node find the left subtree height and right subtree height and use `lf+rh` to return max depth.
- Optimized approach is in O(n). For each node just find the height using `1+max(rh+lf)` but pass an extra variable maxi which will store max value of `rh+lf`.

![Screenshot (88)](https://user-images.githubusercontent.com/67089723/205426465-fe59ffb9-7dc6-42c4-abcb-542a931d5769.png)

#### Video
**https://www.youtube.com/watch?v=Rezetez59Nk&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=17&t=769s**
