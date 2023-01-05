## Problem

https://leetcode.com/problems/longest-valid-parentheses/

## Solution

- `work for both (()) and ()()`

- Take 2 stacks(st1 and index).
- Push default value -1 in index stack.
- Now `for i=0 to n-1`. Check if `word[i]` is `(` if it is increase index to i and push `(` in st1.
- For every `)` check if `st1.top()` is opening or not if it is then pop from index and st stacks and count `max`.
- otherwise just push the i into index stack.
