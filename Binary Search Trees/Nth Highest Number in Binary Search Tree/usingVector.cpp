#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

void inorder(Node* root, vector<Node*>& visited) {
    if (!root) return;
    inorder(root->left, visited);
    visited.push_back(root);
    inorder(root->right, visited);
}

Node* find_nth_highest(Node* root, int n) {
    vector<Node*> visited;
    inorder(root, visited);
    if (n > visited.size()) return nullptr;
    return visited[visited.size() - n]; //size-n
}

