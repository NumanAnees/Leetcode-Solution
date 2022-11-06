/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        // Initialize pointers at head of linkedlist...
        ListNode *p1 = head, *p2 = head;
        // Run a loop until p2 and p2.next is equal to null...
        while (p2 && p2->next)
        {
            p1 = p1->next;       // moving p1 by 1
            p2 = p2->next->next; // moving p2 by 2
            // found the cycle...
            if (p1 == p2)
                return true;
        }
        return false;
    }
};