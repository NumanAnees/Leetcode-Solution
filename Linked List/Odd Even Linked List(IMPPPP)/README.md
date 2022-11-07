## Problem
- **https://leetcode.com/problems/odd-even-linked-list/**
- See the while loop :-)

## Solution
- The idea is to split the linked list into 2 : one containing all odd nodes and other containing all even nodes. And finally, attach the even node linked list at the end of the odd node linked list.
- To split the linked list into even nodes & odd nodes, we traverse the linked list and keep connecting the consecutive odd nodes and even nodes (to maintain the order of nodes) and save the pointer to the first even node.
- Finally, we insert all the even nodes at the end of the odd node list.

### Time Complexity : O(n) - We traverse the linked list only once.

### Auxiliary Space : O(1) - No extra space required