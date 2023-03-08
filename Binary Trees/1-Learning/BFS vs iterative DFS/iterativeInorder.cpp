vector <int> inOrderTrav(node * curr) {
  vector <int> inOrder;
  stack <node *> s;
  while (true) {
    if (curr != NULL) {
      s.push(curr);
      curr = curr -> left;
    } else {
      if (s.empty()) break; //end
      curr = s.top();
      inOrder.push_back(curr -> data);//stire inorder...
      s.pop();
      curr = curr -> right;
    }
  }
  return inOrder;
}
//-------------------------------------Another--------------------------------------
// Function that prints the in-order traversal of the binary tree
void InorderIterative(BinaryTreeNode* root) {
	if (root == nullptr) {
		// If the root is null, we simply print null
		cout << "nullptr";
	}

	// Initializing the stack
	stack<BinaryTreeNode*> stk;

	// Initializing and pointing the current node pointer to root
	BinaryTreeNode* current_node = root;

	// This loop will keep printing the tree node in "L N R"
	// until the current node is null or the stack becomes empty
	while (!stk.empty() || current_node != nullptr) {
		// If the current node is not null, we push it into the stack and point it
		// to its left child and skip to the next iteration
		if (current_node != nullptr) {
			stk.push(current_node);
			current_node = current_node->left;
			continue;
		}

		// Popping and printing the top-most element of the stack
		cout << stk.top()->data;
		current_node = stk.top()->right;
		stk.pop();
		if (!(stk.empty() && current_node == nullptr)){
			cout << ", ";
		}
	}
}