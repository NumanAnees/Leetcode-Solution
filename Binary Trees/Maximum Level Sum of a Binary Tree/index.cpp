class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        //Do a BFS
        int maxSumLevel=INT_MIN;
        int maxSum=INT_MIN;
        int count=1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size= q.size();
            int sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front(); //do here
                q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(sum>maxSum){
                maxSum=sum;
                maxSumLevel=count;
            }
            count++; //0 then 1-->2 etc
        }
        return maxSumLevel;
    }
};