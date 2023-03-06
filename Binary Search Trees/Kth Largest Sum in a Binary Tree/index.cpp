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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        //Do a BFS
        vector<long long int> nums;
        int levels=0; //count levels...
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            levels++;
            int size= q.size();
            long long int sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front(); //do here
                q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            nums.push_back(sum); //push sum of each level
        }
        if(k>levels) return -1;
        sort(nums.begin(),nums.end(),greater<long long int>());
        return nums[k-1];
    }
};