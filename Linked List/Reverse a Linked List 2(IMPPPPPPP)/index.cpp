
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* Leftprev=dummy,*curr = head;
        //Step 1: reach node at position left...
        for(int i=0;i<left-1;i++){
            Leftprev=curr;
            curr=curr->next;
        }
        //Step 2: reverse from  left to right....
        //Now curr='Left' and LeftPrev='node before left'
        ListNode* prev=NULL,*forward=NULL;
        for(int i=0;i<right-left+1;i++){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        //Step 3: attach the reversed list with parent.
        Leftprev->next->next=curr; //initially NULL change it to curr which points node after right.connecting start of reversed list to end.. 
        Leftprev->next=prev; //last node at right R position. conecting end of revered list to start
        return dummy->next; //store head....
    }
};