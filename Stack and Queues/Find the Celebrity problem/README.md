## Problem

https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

## Solution

- Push everyone in stack then use compare and eliminate approach on 2 each till only 1 person left.
- when 1 person if left in stack check its row and column for invalid case otherwise return that celebrity.

### Remember

- if first knows second means first is not a celebrity...
- first don't know second then second is not a celebrity...
- if first dont know second then no need to check if second know first or not because second cant be celebrity then but there is a chance for first...

### TC

O(n) not O(n\*n)
