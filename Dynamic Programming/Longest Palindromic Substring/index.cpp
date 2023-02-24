class Solution {
private:
string longestCommonSubsequence(string text1, string text2) {
    //initialize the 2d vector....
    vector< vector<int> > dp(text1.size()+1, vector<int>(text2.size()+1));
    int maxLength=0, start=0;
    for(int i=1;i<=text1.size();i++){//equals sign here bcoz 2d vector is +1
        for(int j=1;j<=text2.size();j++){//equals sign here bcoz 2d vector is +1 
            if(text1[i-1] == text2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
                int rIdx=i;
                int idx=j-dp[i][j]+1;
                if(text1.size()-rIdx+1==idx){     //Here we check if the reverse string original idx is same as original string idx.
                    if(maxLength<dp[i][j]){ 
                        maxLength=dp[i][j];
                        start=i;
                    }
                }
            }
            else{
                   dp[i][j]=0;
                }
            }
        }
    string ans;
        while(maxLength>0){
            ans.push_back(text1[start-1]);
            start--;
            maxLength--;
        }
    return ans;  
}
public:
    string longestPalindrome(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return longestCommonSubsequence(s,s2);
    }
};