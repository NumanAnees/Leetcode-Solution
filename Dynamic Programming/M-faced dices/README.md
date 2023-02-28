## Problem

https://www.geeksforgeeks.org/number-of-ways-to-get-a-given-sum-with-n-number-of-m-faced-dices/

## Solution

- Basically, it is asked to achieve sum in n number of operations using the values in the range [1…m].
- Use dynamic programming top-down methodology for this problem. The steps are:
- Base Cases:
  - If (sum == 0 and noofthrowsleft ==0) return 1 . It means that sum x has
    been achieved.
  - If (sum < 0 and noofthrowsleft ==0) return 0.It means that sum x has not
    been achieved in all throws.
- If present sum with present noofthrowsleft is already achieved then return it from the table instead of re computation.
- Then we will loop through all the values of faces from i=[1..m] and recursively moving to achieve sum-i and also decrease the noofthrowsleft by 1.
- Finally, we will store current values in the dp array

## Time complexity

Time complexity : O(throws*faces*sum)
Space complexity : O(faces\*sum)
