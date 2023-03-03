class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        //-------Base condition-----
        if (!head || !head->next || !head->next->next)
            return head;

        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_start = head->next;
        //----Divide into 2 parts Linkedlist 1 with odds and Linkedlist 2 with evens------
        while (odd->next && even->next)
        {
            odd->next = even->next;       // Connect all odds
            even->next = odd->next->next; // Connect all evens
            odd = odd->next;
            even = even->next;
        }
        //----------Merge both parts-----------------------
        odd->next = even_start; // Place the first even node after the last odd node.
        return head;
    }
};