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
// Declairing global variable *ans* so that we don't declare it again and again and affect the SC by some factors
    vector<int> ans;
    
	// Find the preorder sequence
    void preorder(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        ans.push_back(root->val);
        preorder(root->left);
        preorder(root->right);        
    }
    
    // Recieve the preorder sequence from *preorder()* and return it
    vector<int> preorderTraversal(TreeNode* root) {
   
        preorder(root);
        return ans;
    }
};