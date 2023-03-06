//---------------------------------------Same code-----------------------------------
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size()-1;
        int r=nums.size()-1;
        while(r>=0){
            if(nums[r]==0){
                r--;
            }else{
                swap(nums[l],nums[r]);
                r--;
                l--;
            }         
        }
    }
};