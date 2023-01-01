class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int start=0;
        int end=nums.size()-1;
        if(!end && nums[0] == target) return {0,0};
        while(start<=end){
            int mid = start+(end-start)/2;
            cout<<mid;
            if(nums[mid]==target){
                int leftStart=mid;
                int rightStart=mid;
                // For left part finding start point...
                while(leftStart-1>=0 && nums[leftStart]==nums[leftStart-1]){//for case [2,2] find 2...
                    leftStart--;
                }
                // For left part finding start point...
                while(rightStart+1<nums.size() && nums[rightStart]==nums[rightStart+1]){
                    rightStart++;
                }
                return {leftStart,rightStart};
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return {-1,-1};
    }
};