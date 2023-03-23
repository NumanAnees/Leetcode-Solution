## Problem

https://leetcode.com/problems/kth-largest-element-in-a-stream/

## Solution

- I am using Min heap. In Min heap the elements are stored in sorted order and the smallest element is maintained at the top. so, here i am pushing the elements into the priority_queue and when the queue.size() > k i just pop the top(). so that the smallest element of that time is popped up & we can have the k'th largest element at the top() all time. we can return the top() if we want to return the k'th largest element. that's it!
