class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int n = nums.size();
      int max_so_far = nums[0];
      int max_ending_here = nums[0];
      int min_ending_here = nums[0];
      for(int i=1;i<n;i++){
	    int temp = max_ending_here*nums[i];
	    max_ending_here = max(nums[i], max(temp, min_ending_here*nums[i]));
	    min_ending_here = min(nums[i], min(temp, min_ending_here*nums[i]));
	    max_so_far = max(max_so_far, max_ending_here);
      }
     return max_so_far;
    }
};