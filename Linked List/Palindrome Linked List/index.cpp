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
    bool isPalindrome(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        //----------------Find the middle node---------------------------
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
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
        //--------------Compare first and second part--------------------
        ListNode *temp = head;
        while (prev != NULL)
        {
            // do not use !val1==val2 instead use val1!=val2....
            if (prev->val != temp->val)
            {
                return false;
            }
            temp = temp->next;
            prev = prev->next;
        }
        return true;
    }
};