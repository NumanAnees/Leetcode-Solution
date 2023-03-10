#include <queue>
using namespace std;

struct Node {
  int val;
  Node* left;
  Node* right;
  Node* next;
};

void connectSiblings(Node* root) {
  if (!root) return;

  queue<Node*> q;
  q.push(root);

  while (!q.empty()) {
    int levelSize = q.size();
    Node* prevNode = nullptr;

    for (int i = 0; i < levelSize; i++) {
      Node* currNode = q.front();
      q.pop();

      if (prevNode) {
        prevNode->next = currNode;
      }

      prevNode = currNode;

      if (currNode->left) {
        q.push(currNode->left);
      }

      if (currNode->right) {
        q.push(currNode->right);
      }
    }
  }
}
