#include <iostream>
#include <string>
#include <vector>

#include "LinkedListNode.cpp"

using namespace std;

class LinkedList {
public:
	LinkedListNode* head;

	LinkedList() { head = nullptr; }
	// InsertAtHead method will insert an integer element at head of a linked list.
	void InsertAtHead(int data) {
		if (head == nullptr) {
			head = new LinkedListNode(data);
		} else {
			LinkedListNode* new_node = new LinkedListNode(data);
			new_node->next = head;
			head = new_node;
		}
	}
	// InsertAtTail method will insert an integer element at tail of a linked list.
	void InsertAtTail(int data) {
		if (head == nullptr) {
			head = new LinkedListNode(data);
		} else {
			LinkedListNode* new_node = new LinkedListNode(data);
			LinkedListNode* temp = head;
			while (temp->next != nullptr) {
				temp = temp->next;
			}
			temp->next = new_node;
		}
	}
	/* CreateLinkedList method will create the linked list using the given 
	   integer array with the help of InsertAthead method. */
	void CreateLinkedList(vector<int>& vec) {
		for (int i = vec.size() - 1; i >= 0; i--) {
			InsertAtHead(vec[i]);
		}
	}
	// DisplayList method will display the elements of linked list.
	void DisplayList() {
		LinkedListNode* temp = head;
		string result = "[";
		while (temp != nullptr) {
			result += to_string(temp->data);
			temp = temp->next;
			if (temp != nullptr) {
				result += ", ";
			}
		}
		cout << result << "]";
	}
};