## BFS

- We use queue in BFS.
- Extra Space required for Level Order Traversal is O(w) where w is maximum width of Binary Tree. In level order traversal, queue one by one stores nodes of different level.
- Maximum Width of a Binary Tree at depth (or height) h can be 2h where h starts from 0.

## Iterative DFS

- We use stack in DFS.
- Extra Space required for Depth First Traversals is O(h) where h is maximum height of Binary Tree. In Depth First Traversals, stack (or function call stack) stores all ancestors of a node.

## Note

- It is evident from above points that extra space required for Level order traversal is likely to be more when tree is more balanced and extra space for Depth First Traversal is likely to be more when tree is less balanced. How to Pick One?

- The most important points is, BFS starts visiting nodes from root while DFS starts visiting nodes from leaves. So if our problem is to search something that is more likely to closer to root, we would prefer BFS. And if the target node is close to a leaf, we would prefer DFS


## PreOrder Iterative
![Screenshot (823)](https://user-images.githubusercontent.com/67089723/221892596-73c87b33-8f7d-4dd7-ba3c-075939136fb3.png)
