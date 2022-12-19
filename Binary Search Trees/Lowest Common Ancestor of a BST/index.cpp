class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)    {
    //if p>q then swap...
    if(p->val>q->val) swap(p,q);
    TreeNode* tempP=p;
    TreeNode* tempQ=q;
    TreeNode* tempRoot=root;
    //check if p is parent of q...
    while(tempP!=NULL){
        if(tempP->val==q->val) return p;
        else if(q->val>tempP->val){
            tempP=tempP->right;
        }
        else{
            tempP=tempP->left;
        }
    }
    //check if q is parent of q...
    while(tempQ!=NULL){
        if(tempQ->val==p->val) return q;
        else if(p->val>tempQ->val){
            tempQ=tempQ->right;
        }
        else{
            tempQ=tempQ->left;
        }
    }
    //if no one is parent then find a node with value n>p and n<q as we know it is BST.
    //we already handled the parent case now we are sure p->val < q->val.
    while(tempRoot!=NULL){
        if(tempRoot->val>p->val && tempRoot->val<q->val) return tempRoot;
        else if(tempRoot->val<p->val){
            tempRoot=tempRoot->right;
        }
        else{
            tempRoot=tempRoot->left;
        }
    } 
    return NULL;
    }
};