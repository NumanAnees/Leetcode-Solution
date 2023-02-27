class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1);
        //base case 
        dp[0] = 1; // [10] return 1 only
        for(int i=1;i<n;i++){
            int maxi=0; //if no one is smaller then 1+0=1....
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    maxi = max(dp[j],maxi);
                }
            }
            //after each iteration we have our ans till n(subsequences ending on n).
            dp[i]=1+maxi;  //jo b max ki value ho+1...
        }
        //as dp array index x store only longest increasing subsequences ending on x...
        //so we have to return max of array not the dp[n] ok...
        auto largest = *max_element(dp.begin(),dp.end()); //find maximum/largest of array built-in
        return largest;
    }
};