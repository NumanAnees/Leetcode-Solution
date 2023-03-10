
// The function to swap two nodes in a linked list
ListNode* swapNodes(ListNode* head, int x, int y) {
    // If the two values are the same, there is nothing to swap
    if (x == y) {
        return head;
    }

    // Create a dummy node that will always point to the head of the list
    ListNode dummy(0);
    dummy.next = head;

    // Initialize pointers to the nodes we want to swap and their previous nodes
    ListNode* prevX = &dummy;
    ListNode* prevY = &dummy;
    ListNode* curr = head;

    // Traverse the linked list to find the nodes we want to swap and their previous nodes
    while (curr) {
        if (curr->val == x) {
            prevX = curr;
        } else if (curr->val == y) {
            prevY = curr;
        }
        curr = curr->next;
    }

    // If either of the nodes is not found or the values of x and y are the same, return the original linked list
    if (prevX == &dummy || prevY == &dummy) {
        return head;
    }

    // Initialize pointers to the nodes that come before and after the nodes we want to swap
    ListNode* nodeX = prevX->next;
    ListNode* nodeY = prevY->next;
    ListNode* nextX = nodeX->next;
    ListNode* nextY = nodeY->next;

    // Swap the nodes by adjusting the next pointers
    if (nextX == nodeY) { // If the two nodes are adjacent
        prevX->next = nodeY;
        nodeY->next = nodeX;
        nodeX->next = nextY;
    } else if (nextY == nodeX) { // If the two nodes are adjacent
        prevY->next = nodeX;
        nodeX->next = nodeY;
        nodeY->next = nextX;
    } else { // If the two nodes are not adjacent
        prevX->next = nodeY;
        nodeY->next = nextX;
        prevY->next = nodeX;
        nodeX->next = nextY;
    }

    // Return the new head of the linked list
    return dummy.next;
}

