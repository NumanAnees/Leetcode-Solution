## Problem

https://leetcode.com/problems/count-collisions-on-a-road/

## Solution

cars on left side which are moving in left direction are never going to collide,
Similarly, cars on right side which are moving right side are never going to collide.

In between them every car is going to collide.

if 'S' then add +1 either from left or right otherwise add +2 for both left and right....
