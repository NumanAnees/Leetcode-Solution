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

```
Q8: Even and odd without modulo operator?
Ans: if((number & 1) == 0){ cout<<"Even number"; }

```

```
Q9: 5 eggs 100 floors?
Ans: Linear ❌ Binary  Search ❌ 10 steps ❌ x+(x-1)+(x-2)...+1 👍
Here sum till 100 is x(x+1)/2 which is 13.6
```

```
Q10: parameter vs argument?
Ans: func calling time->arguments like func(3,4) while in func defination->parameters like func(int a,b).
```

```
Q11: method vs function?
Ans:
    A function doesn’t need any object and is independent, while the method is a function, which is linked with any object.
    We can directly call the function with its name, while the method is called by the object’s name.
```

```
Q12: Void vs Null in cpp?
Ans: Void is a data type identifier in data structures, while null is considered to be a value with no
physical presence.
When void is used, it indicates that there is no size. while initializing the data structure.

```

```
Q13: Static memory vs Dynamic memory?
Ans:
When the allocation of memory performs at the compile time, then it is known as static memory. When the memory allocation is done at the execution or run time, then it is called dynamic memory allocation.
Stack is used for static memory allocation. Heap for dynamic memory allocation.
Static is faster than dynamic.

```

```
Q14: Final keyword?
Ans: In Java, the final keyword can be used to indicate that something cannot be changed. It can be used in several contexts, such as to declare a variable as a constant, to declare a method as final, or to declare a class as final**(impossible to inherit or override)**. The final keyword is useful when you want a variable to always store the same value, like PI (3.14159...). The final keyword is called a "modifier".
```

```
Q15: void pointers?
Ans: A void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any type and can be typecasted to any type.
```
