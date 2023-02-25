int getNthFromLast(Node *head, int n)
{
        Node* temp=head;
       //count how many nodes.....
       int count=0;
       while(temp!=NULL){
           count++;
           temp=temp->next;
       }
       //return ans....
       int target=count-n;
       if(target<0) return -1;//not possible
       int count2=0;
       while(count2!=target){
           head=head->next;
           count2++;
       }
       return head->data;
}