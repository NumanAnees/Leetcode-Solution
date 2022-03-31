class Solution {
public:
    int wholeSum(vector<int>& nums){
        int totalSum=0;
        for(int i=0; i<nums.size();i++){
           totalSum = totalSum+nums[i];
       }
        return totalSum;
    }
    int pivotIndex(vector<int>& nums) {
    int oldSum = wholeSum(nums); 
    int newSum = 0;
    for(int i=0;i<=nums.size()-1;i++){ 
        if (newSum == oldSum - newSum - nums[i]){
          return i;  
        } 
            newSum += nums[i];
    }
        return -1;
    }
};