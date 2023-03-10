Sample input
[7, 14, 21, 28, 9]

Expected output
[7, 28, 21, 14, 9]

## Solution

- To reverse the nodes at even positions in a singly linked list, we can traverse the list and keep track of the current position. When we encounter a node at an even position, we can reverse the sublist starting from the next node and ending at the next even node.
