class Solution {
public:
    TreeNode * inorderPredecessor(TreeNode * root, TreeNode * p) {

        TreeNode* predecessor = NULL;
        while(root!=NULL){
            if(root->val >= p->val){
                root = root->left;
            }

            else{
                predecessor = root;
                root = root->right;
            }
        }
        return predecessor;
    }
};