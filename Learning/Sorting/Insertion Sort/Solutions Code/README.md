# Problem

Sort the array using Insertion Sort.

# Solution

take one element of array and move it to its right position in left subArray.

## time complexity

n square because `n(n-1)/2` as there are two for loops and in each outer iteration(n-1) i there is inner iterations(i-1).

## Stable

it is stable.

## Inplace

Space Complexity is O(1), Which is less than O(logn).

## UseCase

Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

## Best and Worst

Best: O(n)
Worst: n square
