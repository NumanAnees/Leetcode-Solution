// Node indices starts from 1.
LinkedListNode* SwapNthNode(LinkedListNode* head, int n) {
	LinkedListNode* temp = head;
	while(temp->next!=NULL && n!=1){
		temp=temp->next;
		n--;
	}
	//out of boundddd.....
	if(n!=1) return head;
	int value = head->data; //store head bcoz swaping....
	head->data=temp->data;
	temp->data=value;
	return head;
}