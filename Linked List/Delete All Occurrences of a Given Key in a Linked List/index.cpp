#include "LinkedList.cpp"

using namespace std;

LinkedListNode* DeleteNode(LinkedListNode* head, int key) {
	// Initializing prev and current markers
	LinkedListNode* prev = nullptr;
	LinkedListNode* current = head;
	// Scan through the linked list
	while (current != nullptr) {
		// Delete the node if it matches the key
		if (current->data == key) {
			// If key is present in the head node
			if (current == head) {
				head = head->next;
				delete current;
				current = head;
			} else {
				// If key is present in the node other than the head node
				prev->next = current->next;
				delete current;
				current = prev->next;
			}
		} else {
			// Move next if no key found
			prev = current;
			current = current->next;
		}
	}
	return head;
}