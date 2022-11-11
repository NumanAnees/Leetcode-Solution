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
    ListNode* rotateRight(ListNode* head, int k) {
        // handle special case length is 0 or 1
        if (head == NULL || head->next == NULL) return head;

        // calculate list length...
		// we also need to find the tail node and point it to head at the end...
        int length = 1;
        ListNode* tail = head;
        while (tail->next != nullptr)
        {
            tail = tail->next;
            length ++;
        }
        
        //calcualte k so rotate at most length-1 steps...
        k = k % length;
        if (k == 0) return head;
        //new head and new tail and return....
        ListNode *newHead=head;
        ListNode *newTail=head;
        tail->next = head;//important step to point tail to head...
        while(k<length){
            newTail=newHead;
            newHead=newHead->next;
            k++;
        }
        newTail->next=NULL;//point last node to NULL
        return newHead;
    }
};