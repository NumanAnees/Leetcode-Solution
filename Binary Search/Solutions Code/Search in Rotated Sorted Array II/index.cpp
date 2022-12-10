class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return true;
            }
            //for case [1,0,1,1,1] finding 0....
            if(nums[start] == nums[mid] && nums[mid] == nums[end])
            {
                start++; end--;
                continue;
            }

             if(nums[mid]>=nums[start]){// = imp for case [0,1] find 1...
                //left sorted
                if(target>=nums[start]&&target<nums[mid]){ //imp = here bcoz mid equal or not already checked....
                    end=mid-1;
                }
                else{
                    start=mid+1;
                } 
            }
            else{
                //right sorted
                if(target>nums[mid]&&target<=nums[end]){//imp = here bcoz mid equal or not already checked....
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
};