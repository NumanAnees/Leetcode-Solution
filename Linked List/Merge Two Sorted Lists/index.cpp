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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *dummy, *temp;
        dummy = new ListNode();
        temp = dummy;
        // compare and find which one is smaller...
        while (list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                ListNode *newNode = new ListNode(list1->val);
                temp->next = newNode;
                list1 = list1->next; // for loop
            }
            else
            {
                ListNode *newNode = new ListNode(list2->val);
                temp->next = newNode;
                list2 = list2->next; // for loop
            }
            temp = temp->next;
        }
        // instead of 2 while loops for checking which one ended and which list is larger
        // we can simple repoint tail at the exisiting list....
        //  we reached at the end of one of the list
        if (list1)
            temp->next = list1;
        if (list2)
            temp->next = list2;
        return dummy->next;
    }
};