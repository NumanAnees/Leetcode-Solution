class Solution {
private:
  int Tabulation(vector<int> nums){
        if(nums.size()==1)return nums[0];
        int n=nums.size();
        vector <int> dp(n,0);
        //dp[0]=nums[0];
        int max0=nums[0];
        // dp[1]=max(nums[0],nums[1]);
        int max1=max(nums[1],nums[0]);
        for(int i=2;i<nums.size();i++){
            // int inc=dp[i-2]+nums[i];
            int inc=max0+nums[i];
            // int exc=dp[i-1]+0;
            int exc=max1+0;
            max0 = max1;
            max1 = max(inc,exc);
        
        }
        return max1;
    }
public:
    int rob(vector<int>& nums) {
        return Tabulation(nums);
    }
};

//
class Solution {
private:
  int Tabulation(vector<int> nums){
        if(nums.size()==1)return nums[0];
        int n=nums.size();
        vector <int> dp(n,0);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<nums.size();i++){
            int inc=dp[i-2]+nums[i];
            int exc=dp[i-1]+0;
            dp[i] = max(inc,exc);
        }
        return dp[n-1];
    }
public:
    int rob(vector<int>& nums) {
        return Tabulation(nums);
    }
};