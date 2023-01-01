class Solution {
    //can also declare prev and ans as global variables....
private:
    void inorder(TreeNode* root,int &ans,TreeNode* &prev){
        if(root==NULL)return;
        inorder(root->left,ans,prev);
        if(prev!=NULL)ans=min(ans,root->val-prev->val);//go to leftmost node then make it prev and compare.....
        prev=root;
        inorder(root->right,ans,prev);
    }    
public:
    int minDiffInBST(TreeNode* root) {
        TreeNode* prev=NULL;
        int ans=INT_MAX;
        inorder(root,ans,prev);
        return ans;
    }
};