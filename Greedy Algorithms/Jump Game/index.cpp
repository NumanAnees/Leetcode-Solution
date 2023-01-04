class Solution {
public:
    bool canJump(vector<int>& nums) {
      int goal = nums.size()-1; //in start goal is the last...
      for(int i = nums.size()-2;i>=0;i--){
          if(i+nums[i]>=goal){ //i+val becoz we check if i+val can reach to goal index or not.....
              goal = i; //greedy approach -> goal change to index which can 
          }
      }
      return goal == 0;
    }
};