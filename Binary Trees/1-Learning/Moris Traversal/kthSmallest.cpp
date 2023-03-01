Node* KthLargestUsingMorrisTraversal(Node* root, int k)
{
    Node* curr = root;
    Node* Klargest = NULL;
 
    // count variable to keep count of visited Nodes
    int count = 0;
 
    while (curr != NULL) {
        // if left child is NULL
        if (curr->left == NULL) {
 
            // first increment count and check if count = k
            if (++count == k)
                Klargest = curr;
 
            // otherwise move to the left child
            curr = curr->right;
        }
 
        else {
 
            // find inorder successor of current Node
            Node* succ = curr->left;
 
            while (succ->right != NULL && succ->right != curr)
                succ = succ->right;
 
            if (succ->right == NULL) {
 
                // set left child of successor to the
                // current Node
                succ->right = curr;
 
                // move current to its left
                curr = curr->left;
            }
 
            // restoring the tree back to original binary
            //  search tree removing threaded links
            else {
 
                succ->right = NULL;
 
                if (++count == k)
                    Klargest = curr;
 
                // move current to its right child
                curr = curr->right;
            }
        }
    }
 
    return Klargest;
}