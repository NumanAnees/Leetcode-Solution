class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      //shift all non zero elements to left.
        int nonZero=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=0){
                swap(nums[j],nums[nonZero]);
                nonZero++;
            }
        }
    }
};