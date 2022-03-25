# Problem

## Link **https://leetcode.com/problems/count-primes/**

Given an integer n, return the number of **prime numbers** that are strictly less than **n**.

## Example

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

# Solution

Use for loop and increment the **count** whenever you find a prime number.

## Better Approach

- Use Sieve of Eratosthenes
  -- Assume that all the numbers between 2 and n are prime numbers.
  -- For first number **2** mark all numbers that are divided by 2 false(Not Prime).
  -- Move Counter to next number and repeat the step 2.
