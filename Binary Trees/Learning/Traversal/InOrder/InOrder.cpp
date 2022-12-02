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
    //Declare ans arr...
    vector<int> ans;
    //declare func with return type void...
    void InOrder(TreeNode *node){
    if(node==NULL){
        return;
    }
    InOrder(node->left);
    ans.push_back(node->val);//because root at middle,we assume curr is root.
    InOrder(node->right);
}
    vector<int> inorderTraversal(TreeNode* root) {
        InOrder(root);
        return ans;
    }
};