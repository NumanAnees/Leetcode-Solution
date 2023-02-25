## Problem

https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

## Solution

- Use unorderedMap and 2 pointers curr and prev.
- At each location check if it exists in map or not?
- If it exists simply `prev->next=curr->next`
- Otherwise move next and add to umap.
