class Solution {
private:
string longestCommonSubsequence(string text1, string text2) {
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
    //if return string instead of int....
    string ans=""; 
    int i = text1.size(), j = text2.size();
    int len = dp[i][j];
    int index=len-1;
    //initialize with dummy character...
    for(int i=0;i<len;i++) ans+='@';
    while (i > 0 && j > 0) {
        // If current character in X[] and Y are same, then
        // current character is part of LCS
        if (text1[i - 1] == text2[j - 1]) {
            ans[index]=text1[i-1]; // Put current character in ans array
            index--;
            i--;
            j--;
        }
 
        // If not same, then find the larger of two and
        // go in the direction of larger value
        else if (dp[i - 1][j] > dp[i][j - 1])
            i--;
        else
            j--;
    }
    return ans;
    // return dp[text1.size()][text2.size()];//return the last.... (not size1+1 and size2+1)
   }
public:
    int longestPalindromeSubseq(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        string st = longestCommonSubsequence(s,s2); 
        return st.size();
    }
};