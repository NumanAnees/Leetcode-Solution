class Solution {
private:
    int countPaths(int i,int j,int rows,int cols,vector<vector<int>> &dp){
        if(dp[i][j]!=-1) return dp[i][j];
        //base cases....
        if(i==rows-1 && j==cols-1) return 1; //if reached...
        if(i>=rows || j>=cols) return 0; //out of matrix...
        return dp[i][j]=countPaths(i+1,j,rows,cols,dp) + countPaths(i,j+1,rows,cols,dp); // left+right tree....
    }
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m+1,vector<int>(n+1,-1)); //2d dp 
       return countPaths(0,0,m,n,dp);
    }
};

//O(m*n) TC