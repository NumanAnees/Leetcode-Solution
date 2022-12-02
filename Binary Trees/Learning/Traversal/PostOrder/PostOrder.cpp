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
    //declare ans array..
    vector<int> ans;
    //PostOrder void...
    void PostOrder(TreeNode *node){
    if(node==NULL){
        return;
    }
    PostOrder(node->left);
    PostOrder(node->right);
    ans.push_back(node->val);//because root at middle,we assume curr is root.

    }
    vector<int> postorderTraversal(TreeNode* root) {
        PostOrder(root);
        return ans;
    }
};