## Problem

https://leetcode.com/problems/merge-intervals/

## Solution

Linearly iterate over the array if the data structure is empty insert the interval in the data structure. If the last element in the data structure overlaps with the current interval we merge the intervals by updating the last element in the data structure, and if the current interval does not overlap with the last element in the data structure simply insert it into the data structure.

Since we have sorted the intervals, the intervals which will be merging are bound to be adjacent. We kept on merging simultaneously as we were traversing through the array and when the element was non-overlapping we simply inserted the element in our data structure.

**In this ques we only check the 1 clash as the array is sorted but in insert interval ques we dont know the position of newInterval so we keep comparing.**
