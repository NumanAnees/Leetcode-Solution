class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans(n, 0);//initialize with 0....
        for(int i=n-1;i>=0;i--)
        {
            int sum = nums[i]; //initialize with number not 0...inclusive....
            for(int j=0;j<i;j++){
                sum = sum + nums[j];
            }
            ans[i]=sum;
        }
        return ans;
    }
};

//----------------------------------1 loop-------------------------------

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for( int i=1 ; i<nums.size() ; i++ )
            nums[i] += nums[i-1];
        return nums;
    }
};

