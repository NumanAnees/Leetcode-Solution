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
    ListNode *detectCycle(ListNode *head)
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
                break;
        }
        // In case there is no cycle or no meeting point...
        if (!(p2 && p2->next))
            return NULL;
        // run loop until again head & p1 don't collab...
        while (head != p1)
        {
            head = head->next; // moving head by 1...
            p1 = p1->next;     // moving p1 by 1 as well...
        }
        return head; // Or return p1, they both will return the tail where cycle starts...
    }
};