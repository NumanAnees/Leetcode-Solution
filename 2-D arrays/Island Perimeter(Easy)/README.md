## Problem

https://leetcode.com/problems/island-perimeter/

## Solution

- No BFS or DFS bcoz O(m\*n) complexity.
- find how many 1 in the map. If without the consideration of surrounding cells, the total perimeter should be the total amount of 1 times 4.
- find how many cell walls that connect with both lands. We need to deduct twice of those lines from total perimeter
