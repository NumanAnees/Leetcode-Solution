# Problem

For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

# Example

```
The sine wave for the matrix:-
1 2
3 4
will be [1, 3, 2, 4].
```

# Solution

For odd(col&1) column print bottom to top and for even column print top to bottom.
