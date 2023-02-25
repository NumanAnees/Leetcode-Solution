Node *deleteLastOccurance(Node *head)
{
 Node *temp=head;
 Node*last=NULL;
 int val=5;//assume we have to delete 5....and ll is not sorted.
 while(temp->next!=NULL){
     if(temp->next->data==val){
         last=temp;
         temp=temp->next;
     }else{
     temp=temp->next;
     }
 }
 //before end if last is not null simply remove(it maybe a last node)
 if(last){
     if(last->next->next != NULL){
        last->next=last->next->next;

     }
     else{
        last->next=NULL;
     }
 }
 return head;
}