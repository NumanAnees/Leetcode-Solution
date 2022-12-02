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
    bool isBalanced(TreeNode* root) {
        return dfsHeight (root) != -1; //if dfsHeight true return the false.
    }
    int dfsHeight (TreeNode *root) {
        if (root == NULL) return 0;
        int leftHeight = dfsHeight (root -> left);
        if (leftHeight == -1) 
            return -1; //return -1
        int rightHeight = dfsHeight (root -> right);
        if (rightHeight == -1) 
            return -1; //return -1
        if (abs(leftHeight - rightHeight) > 1) //returns the absolute value of an int. 
            return -1;  
        return 1+max(leftHeight, rightHeight);//find height formula...
    }
};