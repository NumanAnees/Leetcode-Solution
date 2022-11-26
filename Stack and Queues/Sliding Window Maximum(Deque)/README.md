## Problem

- **https://leetcode.com/problems/sliding-window-maximum/**

## Solution

- Use dequeue[just like queue with double linkedlist] you can pushfront,popfront,pushback and popback.
- We address this problem with the help of a data structure that keeps checking whether the incoming element is larger than the already present elements. This could be implemented with the help of a de-queue. When shifting our window, we push the new element in from the rear of our de-queue.
- Every time before entering a new element, we first need to check whether the element present at the front is out of bounds of our present window size. If so, we need to pop that out. Also, we need to check from the rear that the element present is smaller than the incoming element. If yes, there’s no point storing them and hence we pop them out. Finally, the element present at the front would be our largest element.

- **https://www.youtube.com/watch?v=CZQGRp93K4k&list=PLgUwDviBIf0p4ozDR_kJJkONnb1wdx2Ma&index=84**
