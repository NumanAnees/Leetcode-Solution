class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positiveArray;
        vector<int> negativeArray;
        vector<int> ansArray;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                positiveArray.push_back(nums[i]);
            }
            else{
                negativeArray.push_back(nums[i]);
            }
        }
        for(int i=0;i<positiveArray.size();i++){
            ansArray.push_back(positiveArray[i]);
            ansArray.push_back(negativeArray[i]);
        }
        return ansArray;
    }
};