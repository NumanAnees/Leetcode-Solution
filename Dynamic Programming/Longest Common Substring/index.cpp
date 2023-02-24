class Solution{
    public:
    int longestCommonSubstr(string text1, string text2,int n, int m) {
    //initialize the 2d vector....
        vector< vector<int> > dp(text1.size()+1, vector<int>(text2.size()+1));
        for(int i=1;i<=text1.size();i++){//equals sign here bcoz 2d vector is +1
            for(int j=1;j<=text2.size();j++){//equals sign here bcoz 2d vector is +1 
                if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
    //find i,j where value is largest...
    int row=0,col=0;
    int maxi = INT_MIN;
    for(int i=0;i<=text1.size();i++){//equals sign....
        for(int j=0;j<=text2.size();j++){//equals sign....
            if(dp[i][j]>maxi){
                maxi=dp[i][j];
                row=i;
                col=j;
            }
        }
    }
    //now find the string and return....
    // string ans="";
    // while(row>0 && col>0){
    //     ans=text1[row]+ans;
    //     row--;
    //     col--;
    // }
    // cout<<ans;
    return maxi;  
}
};