# Solution

As it is sorted and rotated so, our target is (\*)

    |
    |      /
    |     /
    |    /
    |   /
    |                 /
    |                *
    |               /
    |              /
    |             /
    |
    |_______________________________________

First we will find the pivot(smallest or start of second line) and then we will check wheter the given number is greater than pivot 's value and less than the last index if it is true then the required element is in 2nd subArray otherwise search in 1st subArray.
