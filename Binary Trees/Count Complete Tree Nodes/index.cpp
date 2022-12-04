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
    int count=0;
    //declare func with return type void...
    void InOrder(TreeNode *node){
    if(node==NULL){
        return;
    }
    InOrder(node->left);
    count++;//because root at middle,we assume curr is root.
    InOrder(node->right);
}
    int countNodes(TreeNode* root) {
         InOrder(root);
        return count;
    }
};