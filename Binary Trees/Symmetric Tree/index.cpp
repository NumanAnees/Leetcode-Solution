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
    bool isSymmetric(TreeNode* root) {
        // use the same func but just compare left with right not right-right...
       return isSameTree(root->left,root->right);
    }
private:
     bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL){
            return (p==q);
        }
        //check root values same or not by p->val==q->val...
        return (p->val==q->val) && isSameTree(p->left,q->right) && isSameTree(p->right,q->left); //return true only if everything is true. if it false for one case return false.
    }
};