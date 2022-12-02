## Problem

- **https://leetcode.com/problems/binary-tree-level-order-traversal/**

## Solution

- Just use a Queue for BFS.
- Push root in queue and then check for left and right if both exist push them in queue also and before pushing them pop the root and add it to `level vetor`.
- **Run the loop till size k pop and add value in `level vector` 1 by 1 and then simply check for left right and add them**.
