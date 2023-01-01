// Time limit exceed warning in this solution.....

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       
    for(int i=0;i<k;i++)
    {
        int end = nums.size()-1;
        int endP = nums.size()-2;
        while(endP>=0)
        {
            swap(nums[end],nums[endP]);
            end--;
            endP--;
        }
      }
    }
};