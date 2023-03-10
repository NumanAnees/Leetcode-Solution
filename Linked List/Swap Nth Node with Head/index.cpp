
//------------------------------------Real-----------------------------------------
// The function to swap the nth node with the head in a linked list
ListNode* swapNthWithHead(ListNode* head, int n) {
    // If the head is null or n is less than or equal to 1, there is nothing to swap
    if (!head || n <= 1) {
        return head;
    }

    // Initialize pointers to the head node and the nth node
    ListNode* curr = head;
    ListNode* nth = nullptr;
    for (int i = 1; i < n && curr; i++) {
        nth = curr;
        curr = curr->next;
    }

    // If the nth node is null, there is nothing to swap
    if (!nth || !curr) {
        return head;
    }

    // Swap the nth node with the head by adjusting the next pointers
    nth->next = head->next;
    head->next = curr->next;
    curr->next = head;

    // Return the new head of the linked list
    return curr;
}