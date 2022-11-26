## Problem

- **https://leetcode.com/problems/rotting-oranges/**

## Solution

- Use BFS.
- TC and SC will be m\*n.
- Find where is 2 in grid and mark in visited array and push in queue for BFS.
- POP() 1-by-1 from queue and mark neigbours rottens and increase time..... //{{row,col},t+1}
- compare both arrays to find if all 1s converted into 2 or not...
