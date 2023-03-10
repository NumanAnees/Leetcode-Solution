#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int v) : val(v), next(nullptr) {}
};

ListNode* reverseEvenNodes(ListNode* head) {
    if (!head || !head->next) {
        return head;
    }

    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    ListNode* curr = head;
    int pos = 1;

    while (curr) {
        if (pos % 2 == 0) {
            ListNode* next = curr->next;
            ListNode* evenTail = prev->next;
            prev->next = reverseList(curr);
            evenTail->next = next;
            curr = evenTail;
        }
        prev = curr;
        curr = curr->next;
        pos++;
    }

    return dummy.next;
}

ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while (curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void printList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " -> ";
        curr = curr->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Construct the following linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Before reversing even nodes: ";
    printList(head);

    head = reverseEvenNodes(head);

    cout << "After reversing even nodes: ";
    printList(head);

    return 0;
}
