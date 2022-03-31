# Problem

You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the **symbols** and **whitespaces**.

## Note:

``String 'S' is NOT case sensitive.`

## Example :

```
Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.

```

### Requirment

```
Can you solve the problem using O(1) space complexity?

```

# Solution

We can not make any other vector or string. First make a function to convert all the upper case letter to lower case. Next step is to make decisions only if numbers are alphabets otherwise just increase or decrease the end and start.
