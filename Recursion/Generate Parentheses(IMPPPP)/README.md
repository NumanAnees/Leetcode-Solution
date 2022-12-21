## Problem

https://leetcode.com/problems/generate-parentheses/

## Solution

- **At each step there are two directions 1 is open and 2 is close,therefore we are getting all the combinations**.
- Star marks the string to be pushed in ans vector
- When open < close, only then we go further
- If open == 0 stop there, as opening parenthesis are exhausted
- If open < close, it means some of open are used so only now we can close
- If open == close == 0 then no more parenthesis left so add the string to ans vector and return

![del](https://user-images.githubusercontent.com/67089723/208941121-fcb2cabf-7ff0-43d9-a07b-c95eef5bc7bb.jpeg)
