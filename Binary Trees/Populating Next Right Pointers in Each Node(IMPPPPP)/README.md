## Problem

https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

## Solution

- Apply BFS without queue, just start from left most node of each level and connect it with right then move to next.
- When you reach end move to left most node of next level.
- We can only apply this if the tree is perfect binary tree.


![Screenshot (824)](https://user-images.githubusercontent.com/67089723/221895381-ec8046d9-92a4-4882-b498-3e6df3ca317c.png)
