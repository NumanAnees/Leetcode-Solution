## Problem 
- **https://leetcode.com/problems/palindrome-linked-list/**

## Solution
- You have to solve this in O(n) time and O(1) space.
- Find the mid of linkedlist and reverse the 2nd half part of the linkedlist then compare both parts....

### Note
**Even**
`
inp: 1->2->2->1 
out: 1->2->(2) but NULL<-2<-1
`
**Odd**
`
inp: 1->2->3->2->1 
out: 1->2->(3) but NULL<-3<-2<-1 
`
