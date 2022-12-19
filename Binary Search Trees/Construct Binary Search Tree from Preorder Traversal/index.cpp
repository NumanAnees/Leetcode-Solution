/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    //---------------inSertNode--------------
    void inSertNode(TreeNode* temp,TreeNode* node){
        if(node->val>temp->val && temp->right!=NULL){
           inSertNode(temp->right, node);  //can also use return here.......
        } else if(node->val<temp->val && temp->left!=NULL){
           inSertNode(temp->left, node);  //can also use return here.......
        }else if(node->val>temp->val && temp->right==NULL){
            temp->right=node;
            return;  
        }else if(node->val<temp->val && temp->left==NULL){
            temp->left=node;
            return;  
        }        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int n = preorder.size();
        TreeNode* root=NULL;
        for(int i=0;i<n;i++){
            if(i==0){
                root =new TreeNode(preorder[i]);
            }else{
                TreeNode* node=new TreeNode(preorder[i]);  
                inSertNode(root,node);
            }
        }
        return root;
    }
};