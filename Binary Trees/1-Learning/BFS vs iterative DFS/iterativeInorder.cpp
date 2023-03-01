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