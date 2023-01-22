## Problem

https://leetcode.com/problems/insert-interval

## Solution

- If overlap occurs simple increase the overlap count and make flag true and also change the new iterval.
- New Interval after overlap will become min of start time of both and max of end time of both intervals.
- our newInterval can also overlap with other interval so do not push right after changing the oldInterval.
