vector <int> postOrderTrav(node * cur) {
  vector <int> postOrder;
  if (cur == NULL) return postOrder;
  stack < node * > st;
  while (cur != NULL || !st.empty()) {
    if (cur != NULL) {
      st.push(cur);
      cur = cur -> left;
    } else {
      node * temp = st.top() -> right;
      if (temp == NULL) {
        temp = st.top();
        st.pop();
        postOrder.push_back(temp -> data);
        while (!st.empty() && temp == st.top() -> right) { //5 ->right is 6 which is true...
          temp = st.top();
          st.pop();
          postOrder.push_back(temp -> data);
        }
      } else cur = temp;
    }
  }
  return postOrder;

}