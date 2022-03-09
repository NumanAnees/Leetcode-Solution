# Problem

Sort the array using Bubble Sort.

# Solution

Swap current element with adjacent element if it is greater. At the end of each outer loop iteration i the i-th max number will be on its right position.

## time complexity

n square because `n(n-1)/2` as there are two for loops and in each outer iteration(n-1) i there is inner iterations(i-1).

## Stable

it is stable.

## Inplace

Space Complexity is O(1), Which is less than O(logn).

## UseCase

At kth iteration(step) the kth max number will be sorted on end(on its right position).

## Best and Worst

Best: O(n)
Worst: n square
