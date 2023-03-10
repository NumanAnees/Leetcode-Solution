#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};

int delete_zero_sum_subtrees(TreeNode* root) {
    if (!root) {
        return 0;
    }
    int left_sum = delete_zero_sum_subtrees(root->left);
    int right_sum = delete_zero_sum_subtrees(root->right);
    if (left_sum == 0) {
        root->left = nullptr;
    }
    if (right_sum == 0) {
        root->right = nullptr;
    }
    int sum = left_sum + right_sum + root->val;
    if (sum == 0) {
        delete root;
        return 0;
    }
    return sum;
}

int main() {
    // Construct the following binary tree:
    //         7
    //       /   \
    //     -3     6
    //    /  \   / \
    //   2   -4 1   5
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(-3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(-4);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(5);

    cout << "Before deleting zero-sum subtrees: " << endl;
    cout << "        7" << endl;
    cout << "      /   \\" << endl;
    cout << "     -3    6" << endl;
    cout << "    /  \\  / \\" << endl;
    cout << "   2  -4 1   5" << endl;

    delete_zero_sum_subtrees(root);

    cout << "After deleting zero-sum subtrees: " << endl;
    cout << "        7" << endl;
    cout << "         \\" << endl;
    cout << "          6" << endl;
    cout << "         / \\" << endl;
    cout << "        1   5" << endl;

    return 0;
}
