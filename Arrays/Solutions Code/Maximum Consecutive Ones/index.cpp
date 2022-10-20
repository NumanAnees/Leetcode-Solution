class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_max=0;
        int largest_max=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                current_max++;
            }
            else{
                if(current_max>largest_max){
                largest_max=current_max;
                }
                current_max=0;
            }
        }
        //post condition important in case---[1,1,0,1,1,1]-----because no zero after largest            repeatation
        if(current_max>largest_max){
                largest_max=current_max;
        }
        return largest_max;
    }
};