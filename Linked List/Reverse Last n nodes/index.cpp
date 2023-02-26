class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        int n=3;
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        int target=count-n;
        if(target<0) return NULL;
        int count2=0;
        temp=head;//again start from head.....
        ListNode* prev=NULL;
        while(count2<target){ //when equal break....
            prev=temp;
            temp=temp->next;
            count2++;
        }
        //break we are at target value....
        //just reverse....
        ListNode* forward=NULL;
        while(temp!=NULL){
            forward = temp->next;
            temp->next = prev;
            prev=temp;
            temp=forward;  
        }
        cout<<head->next->next->next->val;//reversed successfully from 12345
        return prev;

    }
};