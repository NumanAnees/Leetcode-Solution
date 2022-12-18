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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return root;
        }
        if(root->val==key)
        {
            return helper(root); //no dummy return new root directly...
        }
        TreeNode *dummy = root;
        while(root!=NULL){
            if(key<root->val){
                if(root->left!=NULL && root->left->val==key){
                    root->left = helper(root->left);//new left node
                    break;
                }
                else{
                    root=root->left;//move root to next
                }
            }else{
                if(root->right!=NULL && root->right->val==key){
                    root->right=helper(root->right);//new right node
                    break;
                }
                else{
                    root=root->right;//move root to next
                }
            }
        }
        return dummy;
    }
    TreeNode* helper(TreeNode *root){
        if(root->left==NULL){
            return root->right;//no left then right is root...
        }
        else if(root->right==NULL){
            return root->left;//no right then left is root...
        }
        //if both present.....
        TreeNode *rightChild = root->right;
        TreeNode *lastRightOFLeft = findLastRightOFLeft(root->left);
        lastRightOFLeft->right=rightChild;//adding right part to lastRight 's right because greater....
        return root->left;//left is placed on deleted node...
    }
    TreeNode* findLastRightOFLeft(TreeNode *root){
        if(root->right==NULL){
            return root;
        }
      return findLastRightOFLeft(root->right);
    }
};