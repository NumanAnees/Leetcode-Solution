class Solution {
private:
    int minValue(TreeNode* root){
        int minv=root->val;//store before hand....
        while(root->left!=NULL){
            minv=root->left->val;
            root=root->left;
        }
        //when fails root->left will be null but min store last node value not null...
        return minv;
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(key<root->val)
            root->left=deleteNode(root->left,key);
        else if(key>root->val)
            root->right=deleteNode(root->right,key);
        else{ //value matches....
            if(root->left==NULL)
                return root->right;//if both NULL return right==NULL from here....
            else if(root->right==NULL)
                return root->left;
            //case when both sub trees present...
            root->val=minValue(root->right);//find minimum from right side and replace then delete that duplicate from right side.....
            root->right=deleteNode(root->right,root->val);//remove duplicate
        }
        //all calls complete return the king root
        return root;
    }
};