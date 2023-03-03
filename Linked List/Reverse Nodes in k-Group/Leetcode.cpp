class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    //base call
        if(head == NULL){
            return NULL;
        }
    //Step1:reverse k nodes first
        ListNode* forward = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        while(curr!=NULL && count<k)
        {
            forward=curr->next;
            curr->next = prev;
            prev=curr;
            curr= forward;
            count++;
        }
    //Step2: Use Recursion and check if k nodes exists or not
        int i=1;
        ListNode* now = forward;
        while (now!=NULL && i<k){
            now=now->next;
            i++;
        }
        if (now==NULL){
            head->next = forward;
        }
        else{
            head->next = reverseKGroup(forward,k);
        }
    //Step3: Return head of reversed list
        return prev;
    }
};