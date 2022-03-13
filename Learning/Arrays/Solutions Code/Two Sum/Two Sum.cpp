class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> set;
    for(int i=0;i<nums.size();i++)
    {
        if(set.count(target - nums[i]))
        {
            return {i, set[target - nums[i]]};
        }
        else{
            
        set[nums[i]] = i;
        
        }
    }
        return {};
    }
};