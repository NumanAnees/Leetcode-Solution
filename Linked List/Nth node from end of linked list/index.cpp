//---------------------------- working approach------------------------------
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
//----------------------Another approach--------------------------------
#include "LinkedList.cpp"

using namespace std;

LinkedListNode* FindNthFromLast(LinkedListNode* head, int n) {
	// Return None if linked list is empty or value of n is less than 1

	if (head == nullptr || n < 1) {
		return nullptr;
	}

	// We will use two pointers head and tail
	LinkedListNode* tail = head;

	// Making tail 'n' nodes apart from the head
	while (tail != nullptr && n > 0) {
		tail = tail->next;
		--n;
	}

	// Check out-of-bounds
	if (n != 0) {
		return nullptr;
	}

	// When tail pointer reaches the end of
	// list, head is pointing at nth node.
	while (tail != nullptr) {
		tail = tail->next;
		head = head->next;
	}

	return head;
}
