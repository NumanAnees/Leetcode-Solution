class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum=0,ans=0;
        mp[sum] = 1;
        for(auto it:nums){
            sum += it;
            int find = sum - k;
            if(mp.find(find) != mp.end()){
                ans += mp[find];
            }
            mp[sum]++;
        }
        return ans;
    }
};

//-----------Sliding window approach is good------------------------
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0;
        int right=0;
        int minlen=INT_MAX;
        int sum=0;
        while(right<nums.size())
        {
            sum+=nums[right];
            while(sum>=target)
            {
                minlen=min(minlen,right+1 - left); //+1 if right++ after loop.
                sum-=nums[left++];
            }
            right++;
        }
        return(minlen==INT_MAX)?0:minlen; 
    }
};