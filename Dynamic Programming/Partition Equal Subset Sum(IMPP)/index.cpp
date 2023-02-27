class Solution {
private:
    bool subsetSumToK(int n, int k, vector<int> &arr) {
        vector<vector<bool>> dp(n,vector<bool>(k+1,0)); //boolean now....
        //target 0 then we don't care about index return true...
        for(int i=0;i<n;i++) dp[i][0] = true;
        //if index is last only make arr[0] true.... means in row wise target=arr[0]
        if(arr[0]<=k) dp[0][arr[0]] = true; ////because k can be 50 and arr[0]=99
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
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        //sum of all elements....
        for(auto x:nums){
            sum+=x;
        }
        //target will be sum/2.
        int target=sum/2;
        //base case if odd number return false...
        if (sum % 2 == 1 || nums.size()==1) return false;
        //find if sum target can be made if only 1 pair is found the second is also true because remaining == target then.....
        return subsetSumToK(nums.size(),target,nums);
        
    }
};