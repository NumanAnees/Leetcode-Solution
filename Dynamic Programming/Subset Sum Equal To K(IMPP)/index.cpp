//------------------------------------Recursive-------------------------------------
#include <bits/stdc++.h> 
bool SubsetSumK(int index,int target,vector<int> &arr){
    //base cases.
    if(target==0) return true;
    if(index==0) return arr[0]==target;//equals target or not.
    bool notTake=SubsetSumK(index-1,target,arr);
    bool Take=false;
   if(target>=arr[index]) Take=SubsetSumK(index-1,target-arr[index],arr);
   return Take || notTake;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    return SubsetSumK(n-1,k,arr); 
}
//--------------------------------Memoization---------------------------------------
#include <bits/stdc++.h> 
bool SubsetSumK(int index,int target,vector<int> &arr,vector<vector<int>> &dp){
    //base cases.
    if(target==0) return true;
    if(index==0) return arr[0]==target;//equals target or not.
    //another dp base case....
    if(dp[index][target]!=-1) return dp[index][target];
    bool notTake=SubsetSumK(index-1,target,arr,dp);
    bool Take=false;
   if(target>=arr[index]) Take=SubsetSumK(index-1,target-arr[index],arr,dp);
   return dp[index][target] = Take || notTake;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> dp(n,vector<int>(k+1,-1)); //-1 means not visited.
    return SubsetSumK(n-1,k,arr,dp); 
}
//--------------------------------------Tabulation------------------------------------
#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<bool>> dp(n,vector<bool>(k+1,0)); //boolean now....
    //target 0 then we don't care about index return true...
    for(int i=0;i<n;i++) dp[i][0] = true;
    //if index is last only make arr[0] true.... means in row wise target=arr[0]
    if(arr[0]<=k) dp[0][arr[0]] = true;//because k can be 50 and arr[0]=99
    for(int index=1;index<n;index++){//0 already solved
        for(int target=1;target<=k;target++){
            //copy paste reccurence....
            bool notTake=dp[index-1][target];
            bool Take=false;
            if(target>=arr[index]) Take=dp[index-1][target-arr[index]];
            dp[index][target] = Take || notTake;
        }

    }
    return dp[n-1][k]; // return SubsetSumK(n-1,k,arr) 
}