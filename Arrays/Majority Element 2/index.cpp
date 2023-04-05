class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //At max we have 2 majority elements...
        int count1=0;
        int count2=0;
        int candidate1=-1;
        int candidate2=-1;
        for(auto x:nums){
           if(x==candidate1) count1++;
           else if(x==candidate2) count2++;
           else if(count1==0){
               candidate1=x;
               count1=1;
           }
           else if(count2==0){
               candidate2=x;
               count2=1;
           }
            else{
                count1--;
                count2--;
            }
        }
         vector <int> ans;
         count1 = count2 = 0;
         for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate1)
              count1++;
            else if (nums[i] == candidate2)
              count2++;
          }
          if (count1 > nums.size() / 3)
            ans.push_back(candidate1);
          if (count2 > nums.size() / 3)
            ans.push_back(candidate2);
          return ans;
    }
};