## See this

https://www.techiedelight.com/remove-nodes-bst-keys-outside-valid-range/
https://www.youtube.com/watch?v=kUrDzJO6xts&t=5s

## Solutions of BT:

- BruteForce solution is calling delete function in a for loop. Complexity will be O(Kn) and space is stack space only.
- Better solution is using dfs traversal and store valid range in an array. Then creating a new tree using given range. Complexity will be O(n) time but extra O(n) space along with stack space.

## But this a BST:

The idea is simple – traverse the tree in a bottom-up fashion and truncate the left and right subtree before processing a node. Since we are doing a postorder traversal, the subtree rooted at the current node may be truncated, and the current node becomes a leaf node now. So, for each node, check

- If its key falls within the valid range, nothing needs to be done.
- If the root’s key is smaller than the minimum allowed, remove it and set the root to its right child.
- If the root’s key is larger than the maximum allowed, remove it and set the root to its left child.

- **If smaller then we dont want left subtree vice versa.**
