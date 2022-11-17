## Problem

- https://leetcode.com/problems/asteroid-collision/

## Solution

- Whenever we encounter a positive value, we will simply push it to the stack.
- The moment we encounter a negative value, we know some or all or zero positive values will be knocked out of the stack. The negative value may itself be knocked out or it may enter the stack.
- We will keep on poping the elements from the stack while the `asteroids[i] > s.top()`. But remember, negative asteroids can never pop another negative asteroids, since they will never meet them. So, the final condition is `while(!s.empty() and s.top() > 0 and s.top() < abs(ast[i]))`, we will pop the elements.
- We have to take care of the case when `s.top() == asteroids[i]`. In this case one positive element will pop out and negative asteroid won't enter the stack.
- If after knocking out elements stack becomes empty() or s.top() becomes negative, that means the current asteroids[i] will enter the stack.
