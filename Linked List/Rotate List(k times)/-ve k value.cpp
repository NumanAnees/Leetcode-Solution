#include <vector>
#include "LinkedList.cpp"

using namespace std;

typedef LinkedListNode* NodePtr;

// Helper function to find the length of the linked list
int FindLength(NodePtr head) {
	int len = 0;

	while (head != nullptr) {
		++len;
		head = head->next;
	}

	return len;
}

// Optimizes the number of rotations
int AdjustRotationsNeeded(int n, int len) {
	// If n is positive, the rotations are performed from the right side
	// If n is negative, the rotations are performed from the left side
	// Also handles the case if 'n' is a negative number

	n = n % len;

	if (n < 0) {
		n = n + len;
	}

	return n;
}

NodePtr RotateList(NodePtr head, int n) {
	// If the head is null or n = 0, return head
	if (head == nullptr || n == 0) {
		return head;
	}

	int len = FindLength(head);

	// If n (number of rotations required) is bigger than
	// length of the linked list or if n is negative then
	// we need to adjust the total number of rotations needed
	n = AdjustRotationsNeeded(n, len);

	if (n == 0) {
		return head;
	}

	// Find the start of rotated list
	// If we have 1, 2, 3, 4, 5 where n = 2,
	// 4 is the start of rotated list.
	int rotations_count = len - n - 1;
	NodePtr temp = head;
	
	// After this loop temp, will be pointing
	// to one node prior to rotation point
	while (rotations_count > 0) {
		rotations_count--;
		temp = temp->next;
	}

	// Here newHead is poiting to the rotation point
	NodePtr new_head = temp->next;

	// Set new end of list, i.e., nullptr
	temp->next = nullptr;

	// Iterate to the end of list and
	// link that to the original head
	temp = new_head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = head;

	return new_head;
}

int main() {
	vector<int> v1 = {1, 2, 3, 4, 5};
	LinkedList* list1 = new LinkedList();
	list1->CreateLinkedList(v1);
	cout << "1. Original list:      ";
	list1->DisplayList();

	NodePtr list1_head = RotateList(list1->head, 2);
	cout << "\n   List rotated by 2:  ";
	PrintLinkedList(list1_head);
	cout << "------------------------------------------------------------------------------------------------------\n" << endl;

	LinkedList* list2 = new LinkedList();
	list2->CreateLinkedList(v1);
	cout << "2. Original list:      ";
	list2->DisplayList();

	NodePtr list2_head = RotateList(list2->head, -2);
	cout << "\n   List rotated by -2: ";
	PrintLinkedList(list2_head);
}