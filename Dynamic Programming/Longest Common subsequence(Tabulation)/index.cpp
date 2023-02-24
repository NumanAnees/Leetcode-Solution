class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        //initialize the 2d vector....
        vector< vector<int> > dp(text1.size()+1, vector<int>(text2.size()+1));
        for(int i=1;i<=text1.size();i++){//equals sign here bcoz 2d vector is +1
            for(int j=1;j<=text2.size();j++){//equals sign here bcoz 2d vector is +1 
    // dp[i][j] = (text1[i-1] == text2[j-1]) ? dp[i-1][j-1]+1 : max(dp[i-1][j], dp[i][j-1]);
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
    return dp[text1.size()][text2.size()];//return the last.... (not size1+1 and size2+1)
    }
};