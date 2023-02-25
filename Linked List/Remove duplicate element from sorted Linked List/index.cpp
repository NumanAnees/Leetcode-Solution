Node *removeDuplicates(Node *head)
{
 Node *temp=head;
 Node*left=NULL;
 while(temp->next!=NULL){
     if(temp->data==temp->next->data){
         left=temp;
         while(temp->next && left->data==temp->data){
             temp=temp->next;
         }
         left->data==temp->data?left->next=NULL:left->next=temp;//for case 123455
     }else{
     temp=temp->next;
         
     }
 }
 return head;
}