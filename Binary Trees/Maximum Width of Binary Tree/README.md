## Problem

https://leetcode.com/problems/maximum-width-of-binary-tree/

## Solution

- We will perform a special level order traversal with two loops where inner loops traverse the nodes of a single level. This is to ensure that we can do our calculations once a single level is traversed. In the traversal, we will assign an index to a node.

- If we index the tree as shown above we can easily calculate the width of the tree as rightMostNode – leftMostNode +1. Then we can return the maximum width as our answer. To store the index, we can use a pair of values in our queue( that we use for level order traversal). If we are at index i, then its left and right child are(in 0-based indexing): 2*i+1 and 2*i+2 respectively. Please note that NULL nodes are not hampering the indexing in any way.

## Approach

The algorithm approach can be stated as:

- We take a queue and push the root node along with index 0.
- We traverse the tree using a level order traversal.
- In the level order traversal we set another loop to run for the size of the queue, so that we visit the same level nodes inside it.
- Before a level starts, we use a variable(say curMin) to store the index of the first node.
- We assign an index to every node, and to its children as described above.
- When the inner loop is at the first node of a level, we store its index in another variable(sayleftMost)
- When the inner loop is at the last node of a level, we store its index in another variable(say rightMost)
- After a level in the outer loop, we calculate the width of the level as (rightMost – leftMost +1).
- We return the maximum width as the answer.

## TC and SC

O(n)
We are doing a simple level order traversal. The inner loop simply traverses the nodes level-wise and doesn’t add to the complexity.
