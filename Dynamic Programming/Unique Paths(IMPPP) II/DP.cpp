class Solution {
private:
     int countPaths(int i,int j,int rows,int cols,vector<vector<int>> &obstacleGrid,vector<vector<int>> &dp){
        if(dp[i][j]!=-1) return dp[i][j];
        //base cases....
        if(i==rows-1 && j==cols-1) return 1; //if reached...
        if(i>=rows || j>=cols) return 0; //out of matrix...
        if(obstacleGrid[i][j]==1) return 0; //extra base case for obstacle...
        
         return dp[i][j] = countPaths(i+1,j,rows,cols,obstacleGrid,dp) + countPaths(i,j+1,rows,cols,obstacleGrid,dp); // left+right tree....
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(); //rows
        int n=obstacleGrid[0].size(); //cols
        //if target is obstacle return 0....
        if(obstacleGrid[m-1][n-1]==1) return 0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1)); //2d dp 
        return countPaths(0,0,m,n,obstacleGrid,dp); //pass matrix also
    }
};