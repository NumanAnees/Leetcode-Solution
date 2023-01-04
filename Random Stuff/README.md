## Problem

```
Q1: write a function such that if we pass 100 it returns 101 and if we pass 101 it returns 100 without if else and ternary operator?
```

```
Q2: In what type of data to be searched, traversal of BST will be in worst case?
Ans: The time complexity for searching, inserting or deleting a node depends on the height of the tree h , so the worst case is O(h) in case of skewed trees.
```

```
Q3: Find **all** non repeating elements from Array O(N)?
Ans: use unordermap for counting occurances and then return elements where count is 1.
```

```
Q4: Flatten a nested array. e.g Input: [1, 2, [3, 4, 5, [6]], 7, 8]
Output: [1, 2, 3, 4, 5, 6, 7, 8]

Ans:  use recursion with base case of if ith index is int not another array then add it into ans array.
Ans:  code....
```

```
Q5: Find frequency of characters in string . time complexity should be O(n) and space complexity O(1)?
Ans: code without using unordered_map....
```

```
Q6: print even or odd. No if else or ternary operator...
Ans: code....
```

```
Q7 : Implement Undo and Redo.?
Ans: Maintain 2 stacks. Insert each new character in first stack and when undo is called pop an element from first stack and push into second stack. For redo, if second stack is empty, do nothing else pop top element and push into first stack.
```
