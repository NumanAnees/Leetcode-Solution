## Problem

**https://practice.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category=&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays**

## Solution

- Use two variables Maxi and Sum.
- In for loop add arr[i] + arr[i-1] and store it in Sum. It is a sum of two consective values.
- Last step is to check if Sum is greater than previous highest sum(Maxi).
