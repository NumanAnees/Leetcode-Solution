## Problem
- **https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/**

## Solution
- You know how to find the middle node but this time you have to find mid-1 node for deleting the mid node.
- start slow from head and fast from head->next->next so that it will reach to end 1 time earliar.