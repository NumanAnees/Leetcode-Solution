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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* target = new TreeNode(val);
        if(root==NULL){
            root=target;
            return root;
        }
        TreeNode* temp =root;
        while(temp){
            if(val>temp->val){
                //right part...
                if( temp->right){
                    temp=temp->right;
                }
                else{
                    temp->right = target;
                    break;
                }
            }
            else if(val<temp->val){
                //left part...
                if(temp->left){
                    temp=temp->left;
                }
                else{
                    temp->left = target;
                    break;
                }
            }
        }
        return root;
    }
};