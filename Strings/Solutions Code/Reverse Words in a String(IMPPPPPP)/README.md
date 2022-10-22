## Problem

**https://leetcode.com/problems/reverse-words-in-a-string/**

## Solution

- Look at code first
- We start traversing the string from the end until we hit a space. It indicates that we have gone past a word and now we need to store it.
- We check if our output variable is empty or not.
- If it’s empty, it indicates that this is the last word we need to print, and hence, there shouldn’t be any space after this word.
- if not empty then add the temp variable and space before our output variable.
- The post condition checking whether temp is empty at the end of loop is very important because if no space at end we will miss `last word`........
