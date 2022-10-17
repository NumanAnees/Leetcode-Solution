class Solution {
private:
   void Solve(vector<int> nums,int index,vector<vector<int>> &ans){
        //Base case
       if(index>=nums.size()){
           ans.push_back(nums);
           return;
       }
       for(int i=index;i<nums.size();i++){
           swap(nums[i],nums[index]);
           Solve(nums,index+1,ans);
           //Backtracking for making original array for next iteration
           swap(nums[i],nums[index]);
       }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        Solve(nums,index,ans);
        return ans;
    }
};