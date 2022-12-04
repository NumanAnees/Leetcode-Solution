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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        ans = solve(root,ans,0);
        return ans;
    }
private:
    vector<int> solve(TreeNode* root,vector<int> ans,int level){
        if(root==NULL){
           return ans;
        } 
        if (ans.size()==level){                 // root
            ans.push_back(root->val);
        }
        ans = solve(root->right , ans , level + 1);     // right
        ans = solve(root->left , ans , level + 1);       // left
        return ans; 
    }
};