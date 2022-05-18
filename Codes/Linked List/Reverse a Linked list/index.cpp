LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next == NULL){
		return head;
	}
	LinkedListNode<int> *curr = head;
	LinkedListNode<int> *prev = NULL;
	LinkedListNode<int> *forward = NULL;
	while(curr!=NULL){
		forward = curr->next;
		curr->next = prev;
		prev=curr;
		curr = forward;
	}
	return prev;
}