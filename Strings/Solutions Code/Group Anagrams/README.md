## Problem

- **https://leetcode.com/problems/group-anagrams/**

## Solution

### Non working bad approach

- sort every word
- push each word in unorderedmap and increase count
- make word array from count and push_back() array in ans array
- Remember it will not give the right answer because every word has been sorted

### Working approach

- creating a hashmap in which key is the sorted word and values is an array consist of similar words.
- last step is just to add x.second of each value of hashmap into ans array.
