void morrisInorderTraversal(TreeNode* root) {
    TreeNode* current = root;

    while (current != nullptr) {
        if (current->left == nullptr) {
            // If there is no left subtree, visit the current node
            cout << current->val << " ";
            current = current->right;
        } else {
            // Find the rightmost node in the left subtree
            TreeNode* rightmost = current->left;
            while (rightmost->right != nullptr && rightmost->right != current) {
                rightmost = rightmost->right;
            }

            // If the rightmost node hasn't been threaded to the current node,
            // make it point to the current node, then traverse the left subtree
            if (rightmost->right == nullptr) {
                rightmost->right = current;
                current = current->left;
            } else {
                // If the rightmost node has been threaded to the current node,
                // visit the current node and reset the thread, then traverse the right subtree
                cout << current->val << " ";
                rightmost->right = nullptr;
                current = current->right;
            }
        }
    }
}
