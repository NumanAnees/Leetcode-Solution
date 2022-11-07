//-------------------------------------------Solution Passing All test cases but not 1 pass----------------
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // base condition
        if (!head || !head->next)
            return NULL;
        // count number of node...
        ListNode *temp = head;
        int count = 1;
        while (temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
        // Find which node we should delete...
        int res = count - n;
        ListNode *temp2 = head;
        while (temp2->next != NULL)
        {
            if (res == 1)
            {
                temp2->next = temp2->next->next;
                break;
            }
            else if (res == 0)
            {
                head = head->next;
                break;
            }
            else
            {
                res--;
                temp2 = temp2->next;
            }
        }
        return head;
    }
};
//----------------------------------Solution passing 180/260 test cases not working for [1,2] and 2-------
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (!head || !head->next)
            return NULL;
        ListNode *temp = head;
        ListNode *delNode = head;
        int count = n;
        //-------------Find the n-1 node-----------------------
        while (temp->next != NULL)
        {
            if (count != 1)
            {
                count--;
                temp = temp->next;
            }
            else
            {
                temp = temp->next;
                delNode = delNode->next;
            }
        }
        // cout<<delNode->val<<endl;//return node before the node which we want to del....
        delNode->next = delNode->next->next;
        return head;
    }
};
