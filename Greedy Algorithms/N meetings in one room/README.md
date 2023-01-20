## Problem

https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=n-meetings-in-one-room

## Solution

- **1st activity is automatically inserted**.
- push in pair {end,start}.
- sort the pair based on end time.
- make a pointer to track of last inserted activity.
- check if start of current activity is greater than end of prev activity then increase count and update the last_activity pointer to i.
