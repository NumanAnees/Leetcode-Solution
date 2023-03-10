#include <iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr), parent(nullptr) {}
};

TreeNode* inorderSuccessor(TreeNode* node) {
    if (node->right != nullptr) {
        // if the node has a right child, return the leftmost node in its right subtree
        node = node->right;
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    } else {
        // if the node doesn't have a right child, return the first ancestor that is a left child
        // of its parent
        while (node->parent != nullptr && node->parent->right == node) {  //check if node is on left? if it is return parent otherwise if it is rightmost then return parent null.
            node = node->parent;
        }
        return node->parent;
    }
}

int main() {
    // create a simple binary search tree
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->left->parent = root;
    root->right = new TreeNode(7);
    root->right->parent = root;
    root->left->left = new TreeNode(2);
    root->left->left->parent = root->left;
    root->left->right = new TreeNode(4);
    root->left->right->parent = root->left;
    root->right->left = new TreeNode(6);
    root->right->left->parent = root->right;
    root->right->right = new TreeNode(8);
    root->right->right->parent = root->right;

    // find the in-order successor of node with value 4
    TreeNode* node = root->left->right;
    TreeNode* successor = inorderSuccessor(node);
    if (successor != nullptr) {
        cout << "In-order successor of " << node->val << " is " << successor->val << endl;
    } else {
        cout << "No in-order successor for " << node->val << endl;
    }

    // find the in-order successor of node with value 8
    node = root->right->right;
    successor = inorderSuccessor(node);
    if (successor != nullptr) {
        cout << "In-order successor of " << node->val << " is " << successor->val << endl;
    } else {
        cout << "No in-order successor for " << node->val << endl;
    }

    // find the in-order successor of the root node
    node = root;
    successor = inorderSuccessor(node);
    if (successor != nullptr) {
        cout << "In-order successor of " << node->val << " is " << successor->val << endl;
    } else {
        cout << "No in-order successor for " << node->val << endl;
    }

    return 0;
}
