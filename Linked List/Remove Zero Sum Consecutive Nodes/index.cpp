class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        if(head==NULL)
            return 0;
        unordered_map<int,ListNode*> m;
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        m[0]=dummy;
        int prefixsum=0;
        while(head!=NULL)
        {
            prefixsum+=head->val;
            if(m.find(prefixsum)!=m.end())
            {
                ListNode*start=m[prefixsum];
                int sum=prefixsum;
                while(start!=NULL && start!=head)
                {
                    start=start->next;
                    sum+=start->val;
                    if(start!=head)
                        m.erase(sum);
                }
                m[prefixsum]->next=head->next; //connect 
            }
            else
            {
                m[prefixsum]=head;
            }
            head=head->next;
        }
        return dummy->next;
    }
};