class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false; //for case [] 0....
        if(root->left==NULL and root->right==NULL and targetSum-root->val==0){ //we are at leaf node...
           return true;
        }
        
       return  hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
        
    }
};