class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)     {
        vector<vector<int>> ans;
        vector<int> each;
        helper(0,target,candidates,each,ans);
        return ans;
    }
private:
   void helper(int ind,int target,vector<int> &nums,
           vector<int> &each,vector<vector<int>> &ans){
        //base case because [2,2,2,1,0] is also 7....
        if(ind==nums.size()){
            if(target==0){
                ans.push_back(each);//we found the 1 sequence...//it is a O(n) operation
                //last step it is no return only return when overflowed so that no out of bound exception come....
            }
            return;
        }
       //-----------pick case--------
       if(nums[ind]<=target){
           each.push_back(nums[ind]);//pushing in each array if pick...
           helper(ind,target-nums[ind],nums,each,ans);
           //Remember,to take the element out...
           each.pop_back();
       }
       //---------not pick case--------
       helper(ind+1,target,nums,each,ans);
   }
};