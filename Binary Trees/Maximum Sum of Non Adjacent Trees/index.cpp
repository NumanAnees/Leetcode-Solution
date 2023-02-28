class Solution{
    public:
    unordered_map<Node*, int> dp; //int store max sum here   
    int getMaxSum(Node *root) 
    {
        if(root == NULL) {
            return 0;
        }
        if(dp[root]) {
            return dp[root];
        }
        int inc = root -> data;
        if(root -> left) {
            inc += getMaxSum(root -> left -> left);
            inc += getMaxSum(root -> left -> right);
        }
        if(root -> right) {
            inc += getMaxSum(root -> right -> left);
            inc += getMaxSum(root -> right -> right);
        }
        int exc = getMaxSum(root -> left) + getMaxSum(root -> right);
        dp[root] = max(inc, exc);
        return dp[root];
    }
};