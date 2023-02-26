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
private:
    void inorderMax(TreeNode* root,int &max1,int &max2){
        if(root==NULL){
            return;
        }
        inorderMax(root->left,max1,max2);
        if(root->val > max1){
            max2=max1;
            max1=root->val;
        }
        else if(root->val>max2){
            max2=root->val;
        }
        inorderMax(root->right,max1,max2);
    }
public:
    int findSecondMinimumValue(TreeNode* root) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        inorderMax(root,max1,max2);
        return max2;
    }
};