// C++ Program to print Longest Path
// from root to leaf in a Binary tree
#include <bits/stdc++.h>
using namespace std;

// Tree node Structure
struct Node {
	int data;
	Node *left, *right;
};

struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return (node);
}

// Function to find and return the
// longest path
int longestPath(Node* root)
{
    if(root == NULL) return 0; 
        
        int lh = longestPath(root->left); 
        int rh = longestPath(root->right); 
        
        return 1 + max(lh, rh); 
}

// Driver Code
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->right = newNode(6);

	int output = longestPath(root);

	cout << output;
	return 0;
}
