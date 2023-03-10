Node* find_nth_highest(Node* root, int n) {
    Node* current = root;
    while (current) {
        if (!current->right) {
            if (n == 1) return current;
            n--;
            current = current->left;
        } else {
            Node* successor = current->right;
            while (successor->left && successor->left != current) {
                successor = successor->left;
            }
            if (!successor->left) {
                successor->left = current;
                current = current->right;
            } else {
                successor->left = nullptr;
                if (n == 1) return current;
                n--;
                current = current->left;
            }
        }
    }
    return nullptr;
}
