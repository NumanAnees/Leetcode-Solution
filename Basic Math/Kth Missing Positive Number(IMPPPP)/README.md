## Problem

https://leetcode.com/problems/kth-missing-positive-number/

## Solution

usually if all elements smaller than K (let say 5) are not present in the array then answer will be K itself cuz the 5th number missing will be 5 cuz there is nothing else in between right?right!

but if there are some elements smaller than K present in array like [2,3,4,7,11] here we are incrementing K because when we first see 2 , we on the spot know that now 5 will not be the 5th empty number bcz 2 is available so our number can be 6 now, we proceed further and find 3 in array, now we know that since 3 is present in array (which means there is another number present) so now 6 can't be the answer and it will be 7,

inshort : as we move in array we check how many numbers are present between 1 and K(here 5) , usually if there are no numbers 5 will be the missing number , but if there are some numbers they will push the k because k is the missing number.
ex: [2,9,11] here since 2 is present missing number will be 6, usually if 2 was not present it will be 5 but 2 pushed it cuz it was present , makes sense .
