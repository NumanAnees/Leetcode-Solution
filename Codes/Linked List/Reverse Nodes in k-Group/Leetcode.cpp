class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    //base call
        if(head == NULL){
            return NULL;
        }
    //Step1:reverse k nodes first
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next = prev;
            prev=curr;
            curr= next;
            count++;
        }
    //Step2: Use Recursion and check if k nodes exists or not
        int i=1;
        ListNode* now = next;
        while (now!=NULL && i<k){
            now=now->next;
            i++;
        }
        if (now==NULL){
            head->next = next;
        }
        else{
            head->next = reverseKGroup(next,k);
        }
    //Step3: Return head of reversed list
        return prev;
    }
};