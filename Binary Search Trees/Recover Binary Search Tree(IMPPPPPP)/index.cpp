class Solution {
private:
    TreeNode* first;
    TreeNode *prev;
    TreeNode *middle;
    TreeNode *last;
public:
    //-------------InOrder-------------
    void inOrder(TreeNode *root){
        if(root==NULL) return;
        inOrder(root->left);
        if(prev!=NULL && (root->val<prev->val)){
            //if it is the first violation,mark these
            //two nodes as first and middle.
            if(first==NULL){
                first=prev;
                middle=root;
            }
            else{
                //if not first violation then deal with last.
                last=root;
            }
            
        }
        //after that mark current root as prev because
        //we are moving to next...
        prev=root;    
        inOrder(root->right);
    }
    //---------------Main------------------
    void recoverTree(TreeNode* root) {
        first=middle=last=NULL;
        prev=new TreeNode(INT_MIN);//prev of a[0]...
        inOrder(root);
        if(first && last) swap(first->val,last->val);
        else swap(first->val,middle->val);
    }
};