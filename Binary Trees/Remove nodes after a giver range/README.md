## Problem

Remove nodes after a given range.

## Solution

- BruteForce solution is calling delete function in a for loop. Complexity will be O(Kn) and space is stack space only.
- Better solution is using dfs traversal and store valid range in an array. Then creating a new tree using given range. Complexity will be O(n) time but extra O(n) space along with stack space.
- See same question in BST section.
