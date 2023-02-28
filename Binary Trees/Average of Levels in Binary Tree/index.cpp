class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        //Do a BFS
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double size= q.size();
            double sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front(); //do here
                q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            double avg=sum/size;
            ans.push_back(avg);
        }
        return ans;
    }
};