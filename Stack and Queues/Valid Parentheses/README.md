## Problem

- **https://leetcode.com/problems/valid-parentheses/**

## Solution

- input: `{([][])}`
- output: `true`
- If character is `(` `{` `[` push into stack.
- else match and **POP** the top element to check if current ch[i] is closing of top...
- return stack.empty()-> even odd case.
- return false if stack is empty and current ch[i] is closing bracket...
