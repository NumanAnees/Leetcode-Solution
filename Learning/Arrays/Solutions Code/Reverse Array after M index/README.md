# Problem

Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

## Example:

```
We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0
based indexing so the subarray {5, 6} will be reversed and our
output array will be {1, 2, 3, 4, 6, 5}.

```

## Input Format:

```
The very first line of input contains an integer ‘T’ denoting the number of test cases.

The first line of every test case contains one integer ‘N’ where ‘N’ denotes the number of elements and an integer ‘M’ which denotes after which position the array has to be reversed.

The second line of every test case contains ‘N’ space-separated integers which denote the elements of input of array/list.
Output Format:
For each test case, return the required array.

Output for each test case is printed on a separate line.
```

## Note:

` You do not need to print anything, it has already been taken care of. Just implement the given function.`

` Consider 0-based indexing of the array.`

### Constraints:

````
1 <= T <= 10
0 <= M <= N <= 5*10^4
-10^9 <= ARR[i] <= 10^9
```

### Sample Input 1:
```
2
6 3
1 2 3 4 5 6
5 2
10 9 8 7 6
```

### Sample Output 1:
```1 2 3 4 6 5
10 9 8 6 7
````
