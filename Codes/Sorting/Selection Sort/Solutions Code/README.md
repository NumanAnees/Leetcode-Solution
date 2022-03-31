# Problem

Sort the array using Selection Sort.

# Solution

Assume that first element is smallest(store it in min variable) then check if any other number in array is smallest than min variable and store that number in min variable. Next step is just to Swap it with starting index.

## time complexity

n square because `n(n-1)/2` as there are two for loops and in each outer iteration(n-1) i there is inner iterations(i-1).

## Not Stable

### Example

`2a 3 4 6 7 2b 1`

## Inplace

Space Complexity is O(1), Which is less than O(logn).

## UseCase

it is used when array size is small.

## Best and Worst

both are N square.
