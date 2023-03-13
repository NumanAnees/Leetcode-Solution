class Solution {
public:
    int leftIndex(vector<int> nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int result=-1;
        while(start <= end) {

        if(nums[mid] == target) {
            result= mid;
            end = mid-1;
        }
        else if(target > nums[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return result;    
    }
    //Right Index
    int rightIndex(vector<int> nums, int target){
        int start = 0;
        int end = nums.size()-1;
        int mid = (end+start)/2;
        int result=-1;
        while(start <= end) {

        if(nums[mid] == target) {
            result= mid;
            start = mid+1;
        }
       else if(target > nums[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return result;    
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> Answer;
        int LeftMost = leftIndex(nums,target);
        Answer.push_back(LeftMost);
        int RightMost = rightIndex(nums,target);
        Answer.push_back(RightMost);
        return Answer;

    }
};