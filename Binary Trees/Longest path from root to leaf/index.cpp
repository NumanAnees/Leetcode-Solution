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
vector<int> longestPath(Node* root)
{

	// If root is null means there
	// is no binary tree so
	// return a empty vector
	if (root == NULL) {
		vector<int> temp
			= {};
		return temp;
	}

	// Recursive call on root->right
	vector<int> rightvect
		= longestPath(root->right);

	// Recursive call on root->left
	vector<int> leftvect
		= longestPath(root->left);

	// Compare the size of the two vectors
	// and insert current node accordingly
	if (leftvect.size() > rightvect.size())
		leftvect.push_back(root->data);

	else
		rightvect.push_back(root->data);

	// Return the appropriate vector
	return (leftvect.size() > rightvect.size()
				? leftvect
				: rightvect);
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

	vector<int> output = longestPath(root);
	int n = output.size();

	cout << output[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		cout << " -> " << output[i];
	}

	return 0;
}
