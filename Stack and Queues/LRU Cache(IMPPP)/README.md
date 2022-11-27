## Problem

- **https://leetcode.com/problems/lru-cache/**

## Solution

- LRU==least recently used and last recently used is different.
- Time complexity of umap is O(1) avg and worst case 1 in millions O(n).
- Use a doubly linkedlist and a unorderedmap.
- Head->next will be the last recently used and tail->prev will store Least recently used.
- Check if capacity==map.size then replace key if same or just delete the LRU and put new obj.
