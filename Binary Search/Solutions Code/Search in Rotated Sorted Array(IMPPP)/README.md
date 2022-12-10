## Problem

https://leetcode.com/problems/search-in-rotated-sorted-array

## Solution

- Check left to mid is sorted or not?
- if yes then check target is between range or not. if in range then left part otherwise select right.
- if left not sorted then right sorted ofc.

## Detail Solution

- Core Observation - As we are are given a sorted and rotated array, it is guranteed that either 1/2 of the array is going to be sorted (If you aren't getting this try taking different combinations of provided example array)
- Now our first job is to find that sorted half. To do this we can do a simple comparison of mid (mid = (low+high)/2) element with the starting element (low) of the array.
- Comparison (do this with pen and paper in hand)
  - if(nums[mid] >= nums[low]) -> the left half of array is sorted.
  - else -> the right half of array is sorted.
- Now if left half of array is sorted:
  - check if provided target element lies in the range [low, mid).
  - If it does then update high = mid-1 (hence skipping the part present on right of mid).
  - else update low = mid+1 (hence skipping the part present on left of mid)
- else as the right array is sorted:
  - check if provided target element lies in the range (mid, high].
  - If it does then update low = mid+1 (hence skipping the part present on left of mid).
  - else update high = mid-1 (hence skipping the part present on right of mid)
- If still not found then return -1 (duh!)
