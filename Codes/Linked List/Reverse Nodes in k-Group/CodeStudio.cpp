public class Solution {

	public static Node kReverse(Node head, int k) {
//base call
        if(head == NULL){
            return NULL;
        }
    //Step1:reverse k nodes first
        Node* next = NULL;
        Node* curr = head;
        Node* prev = NULL;
        int count = 0;
        while(curr!=NULL && count<k)
        {
            next=curr->next;
            curr->next = prev;
            prev=curr;
            curr= next;
            count++;
        }
    //Step2: Use Recursion
        if(next!=NULL){
            head->next = kReverse(next,k);
        }
    //Step3: Return head of reversed list
        return prev;
	}
}