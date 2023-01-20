## Problem

https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=fractional-knapsack

## Solution

- No need to use any extra space for storing unitPrice just sort based on the comparator class/func. (sort by greater)
- if Weight is > item 's weight take the whole item and move next.
- else take the part of it by `ans+=(val/weight)*W`.
- No need to use extra variable just change `W` variable.
