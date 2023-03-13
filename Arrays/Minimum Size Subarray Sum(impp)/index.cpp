//-----------------------------------Want contigous subarray this solution is for non contigous------------------
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //sort and check till sum!= target or greater than target....
        sort(nums.begin(),nums.end(),greater<int>()); //descending...
        int sum=0;
        int count=0;
        for(auto c:nums){
            if(sum<target){
                sum+=c;
                count++;
            }
            else{
                break;
            }
        }
        if(sum>=target) return count;
        else return 0;
    }
};
//----------------------------------------------Contigeous-----------------------------------
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