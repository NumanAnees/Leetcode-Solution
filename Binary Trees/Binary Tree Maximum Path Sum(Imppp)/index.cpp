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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN; //do not initialize with 0 because for testcase -3 it will return 0 not -3.
        heightSumEachNode(root,maxi);
        return maxi; 
    }
private:
    int heightSumEachNode(TreeNode* node,int &maxi){
        if(!node){
            return 0;
        }
        //IF we get -ve number we simply return 0 from path.
        int lfSum =max(0,heightSumEachNode(node->left,maxi));
        int rhSum = max(0,heightSumEachNode(node->right,maxi));
        maxi = max(maxi,node->val+rhSum+lfSum); //adding left height and right for max depth
        return (node->val)+max(rhSum,lfSum); //Our answer already stored in maxi
        
    }
    
};