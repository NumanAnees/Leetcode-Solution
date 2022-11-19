## Problem

- https://leetcode.com/problems/online-stock-span/

## Solution

We can maintain a decreasing stack to mark frequencies of elemnets,
E.g. 30 ,25 ,45 ,50 Now in this case

- we push {30,1}
- then we push {25,1}
- then comes 45 but 45 is greater than s.top() , means numbers coming after 45 will include (30 , 25 that are already in stack ) in ans only if they are able to cross 45. So we can say that instead of keeping 30 , 25 , 45 we can just keep {45,3} (this states that there are 3 numbers less than equal to 45).
- Then comes 50 now 50 is also greater than 45 , So it takes all the numbers coming in span for 45 .
- Now our stack will contain {50,4} .

```
TC: O(n) (each element is pushed and popped only once)
SC: O(n)
```
