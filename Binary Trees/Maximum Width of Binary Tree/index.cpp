class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
         if (!root) return 0;
          long long int ans = 0;
          queue<pair<TreeNode*,long long int>> q;
          q.push({root,0});
          while(!q.empty()){
                int size = q.size();
                long long int curMin = q.front().second;
                long long int leftMost, rightMost;
            for(int i = 0; i < size; i++){
                  long long int cur_id = q.front().second - curMin; // - to prevent int overflow
                  TreeNode * temp = q.front().first;
                  q.pop();
                  if (i == 0) leftMost = cur_id; //store first for comparing at end..
                  if (i == size - 1) rightMost = cur_id;//store last for comparing at end..
                  if (temp->left)
                    q.push({temp->left,cur_id * 2 + 1});//0 base indexing
                  if (temp -> right)
                    q.push({temp->right,cur_id * 2 + 2});
            }
                ans = max(ans, rightMost - leftMost + 1); //maxIndex-minIndex of each level....
            }
            return ans;
    }
};