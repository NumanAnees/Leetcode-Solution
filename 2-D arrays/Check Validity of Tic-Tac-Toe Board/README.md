## Problem

https://www.educative.io/courses/coderust-hacking-the-coding-interview/gxGprXnrxNr

## Solution

In this solution, we check the validity of the state of the tic-tac-toe board in the following way:

- We count the number of Xs and Os in the entire two-dimensional board.
- Before proceeding further, we verify the edge cases.
  - Since player X starts first, if the number of O counts is greater than the number of X counts, return false. Moreover, the difference between the two counts must not be greater than one.
- Now, check if player O has a winning condition. If that is the case, check for the following possibilities:
  - If player X also has a winning condition, return false.
  - Otherwise, if the count of X is not equal to the count of O, return false, as player O always plays second.
- If player X has a winning condition, we check if the count of X is greater than the count of O. Since player X plays the first move, player X’s count would be one more than player O.
