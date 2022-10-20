class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum1+=nums[i];
        }
        //formula for sum of N natural numbers
        sum2 = n*(n+1)/2;
        int ans = sum2-sum1;
        return ans;
    }
};