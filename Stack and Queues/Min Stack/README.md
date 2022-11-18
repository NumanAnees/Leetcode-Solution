## Problem

- **https://leetcode.com/problems/min-stack/**

## Solution

- `Solution 1:` Using pairs to store the value and minimum element till now.

  - The first element in the pair will store the value and the second element will store the minimum element till now.

- `Solution 2:` Let’s take a variable that stores the minimum number. So whenever a push operation comes in just take that number put it in the stack and update the variable to the number.

  - PUSH: Now if there is a push operation just check whether that number is less than the min number. If it is smaller than min we will push a modified value which is a `push(2 \* Val – min)` into the stack and will update min to the value of the original number. If it’s not then we will just push it as it is.

  - While returning the top value we know that it is a modified value. We will check if the top value is lesser than min, If it is then we will return the min as the top value.

  - While making pop we will check if the top value is lesser than min, If it is then we must update our min to its previous value. In order to do that min = `(2 \* min) – (modified value)` because modified value is `(2*val)`-**prev_min** and we will pop the element.
