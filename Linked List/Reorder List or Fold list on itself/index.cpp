/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
    //----------------Find the middle node---------------------------
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
    //-------------Find reverse the second part----------------------
        ListNode *curr = slow;
        ListNode *prev = NULL;
        ListNode *forward = NULL;
        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
    //--------------Merge first and second part--------------------
        while (head != NULL && prev->next!= NULL)
        {
            ListNode* temp = head->next;//2nd node reserved
            head->next=prev;//linking 1st and last
            prev=prev->next;//moving n to n-1
            head->next->next=temp;//linking last(which is 2nd now) to the original 2...
            head = temp;//do same for next node....
        }
    
    }
};