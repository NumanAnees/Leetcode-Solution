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