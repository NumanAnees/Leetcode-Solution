## Note

- No two nodes in the tree have the same data value.
- It is assured that the node V is present and a path always exists.

## Solution

We will use an external list to store our path. This list will be passed by reference to our recursive function. Moreover, we can set the return value of our function as boolean, this will help us to know whether node V was found in a subtree or not.

The algorithm steps can be stated as follows:

- We pass the function with our root node, the path list and node V.
- For the base case, if root is pointing to NULL, we return false as clearly node V can’t be found.
- Now we first push the node to our path list.
- Then we check whether the current node is the target node or not, if it is then no further execution is needed and we return to the parent function.
- If not, then we recursively call its left and right child to find the target node V. If any one of them returns true, it means we have found node V at lower levels and return true from the current function.
- If the value is not found at the current node and neither in any of the recursive calls, it means that the value is not present in the current sub-tree, therefore we pop out the current node from the path list and return false.

## Video

https://www.youtube.com/watch?v=fmflMqVOC7k
