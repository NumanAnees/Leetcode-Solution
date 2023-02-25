## Problem

You have given a sorted array of unknown size how would you search an element from array

## Solution

At first take start as 0 and end as 1. Then check if target is greater than nums[end]. if it is greater then simply change start=end+1 and end=end+(end-start+1)\*2. `increasing Window approach`
