//------------------------------------Queue--------------------------------------------
Node* convertList(Node* head){
    Node* curr = head;
    Queue<Node*> q;
    //process all nodes...
    while(curr!=NULL){
        //last node is reached...
        if(curr->next==NULL){
            //dequeue the front node and set it to as the next node of current node..
            curr->next = q.front();
            q.pop();
        }
        if(curr->child!=NULL){
            q.push(curr->child); //push in queue...
        }
        //move curr node to next...remember it is changing.
        curr=curr->next;
    }
    return head;
}
//------------------------------------O(1) Space-----------------------------------------
void flattenList(Node *head) 
{ 
    /*Base case*/
    if (head == NULL) 
    return; 
  
    Node *tmp; 
  
    /* Find tail node of first level linked list */
    Node *tail = head; 
    while (tail->next != NULL) 
        tail = tail->next; 
  
    // One by one traverse through all nodes of first level 
    // linked list till we reach the tail node 
    Node *cur = head; 
    while (cur != tail) 
    { 
        // If current node has a child 
        if (cur->child) 
        { 
            // then append the child at the end of current list 
            tail->next = cur->child; 
  
            // and update the tail to new last node 
            tmp = cur->child; 
            while (tmp->next) 
                tmp = tmp->next; 
            tail = tmp; 
        } 
  
        // Change current node 
        cur = cur->next; 
    } 
} 