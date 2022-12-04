## Problem

https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=top-view-of-binary-tree

## Solution

- **Do level order traversal with a vertical line**.
- First we have to make a queue of pair which have nodes and their respective +ve and -ve indexes.
- Then we need a map data structure to store the lines and the nodes. This map will store the data in the form of `sorted` orders of keys(Lines).
- Here we will follow the level order traversal.
- Traverse through the nodes starting with root,0 and store them to the queue.
- Until the queue is not empty, store the node and line no. in 2 separate variable .
- Then check if that line is present in the map or not
- If not present then store the line and the node->val to the map
- Otherwise store the node->left and node->right along with there line nos. to the queue.
- Then print the node->val from the map

## Recursive Implementation

Recursive implementation is not possible without keeping in mind the height...

## TC

`O(n)` in skew `O(nlogn)`, just imagine a skewed tree where every node has to be put into the `ordered map` and every insertion in ordered map costs `O(logn)`.

## SC

`O(n)`

## Video

https://www.youtube.com/watch?v=Et9OCDNvJ78
