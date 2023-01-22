## Problem

https://leetcode.com/problems/gas-station/

## Solution

- Actually, the reason why it works is simple, and it happens because of `two factors`.
- First, if you moved to some value, and your total sum is greater than zero, then it means, that previous values did bring some value to the outcome. For example, we have gas = [2,3,0] and cost = [0,0,5]. If we take just solely value 3 without 2, it wouldn't be enough to pass the last station, but previous values definitely bring some value to the outcome.
- Second, if we know, that there's definitely has to be a solution. Then, we may assume, that it has to be the smallest possible value, as I said before it may bring the most value to the result

- So, we keep the total with us and check if any value of `gas[i]-cost[i]` make it less than 0 or not if we found then we make our total again 0 and our `ans=i+1`.
