class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;//base cases
        for(int i=2;i<=n;i++){
            int min = INT_MAX;
             for(int j=1;j*j<=i;j++){//j square less than i.....
                 int rem = i-j*j;//for n=10 n-1*1==9
                 if(dp[rem]<min){
                     min=dp[rem]; //update min
                 }       
                //  mini=min(dp[rem],mini);         
             }
            dp[i] = min+1; //final....
        }
        return dp[n];
    }
};