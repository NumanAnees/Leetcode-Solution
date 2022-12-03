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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        heightOfEachNode(root,maxi);
        return maxi;
    }
private:
    int heightOfEachNode(TreeNode* node,int &maxi){
        if(!node){
            return 0;
        }
        int lf = heightOfEachNode(node->left,maxi);
        int rh = heightOfEachNode(node->right,maxi);
        maxi = max(maxi,rh+lf); //adding left height and right for max depth
        return 1+max(rh,lf); //finding max for finding height
    }
};