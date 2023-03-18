// C++ program for the above approach

// Function to reverse all the even
// positioned node of given linked list
Node* reverse_even(Node* A)
{
	// Stores the nodes with
	// even positions
	Node* even = NULL;

	// Stores the nodes with
	// odd positions
	Node* odd = A;

	// If size of list is less that
	// 3, no change is required
	if (!odd || !odd->next || !odd->next->next)
		return odd;

	// Loop to traverse the list
	while (odd && odd->next) {

		// Store the even positioned
		// node in temp
		Node* temp = odd->next;
		odd->next = temp->next;

		// Add the even node to the
		// beginning of even list
		temp->next = even;

		// Make temp as new even list
		even = temp;

		// Move odd to it's next node
		odd = odd->next;
	}

	odd = A;

	// Merge the evenlist into
	// odd list alternatively
	while (even) {

		// Stores the even's next
		// node in temp
		Node* temp = even->next;

		// Link the next odd node
		// to next of even node
		even->next = odd->next;

		// Link even to next odd node
		odd->next = even;

		// Make new even as temp node
		even = temp;

		// Move odd to it's 2nd next node
		odd = odd->next->next;
	}

	return A;
}


