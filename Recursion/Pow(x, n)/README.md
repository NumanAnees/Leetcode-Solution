## Solution

More optimize approach than using for loop because instead of `n` iterations it works on `(logn)` calls.

## Leetcode Solution

- -n becomes n and in that case x becomes 1/x.
- If power even then 2pow6==64 while 2\*2pow6/2==64.
- If power is odd then make it even by x\*func(x,n-1).
