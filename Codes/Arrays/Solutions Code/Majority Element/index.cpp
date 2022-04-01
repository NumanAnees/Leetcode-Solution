class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> set;
        int mid = nums.size()/2;

        for(int i=0;i<nums.size();i++)
        {
        //issue report in
        //set[nums[i]] = i;  
        set[nums[i]]++;       
        }
        for(auto x : set)
            cout<<x.first<<" "<<x.second<<endl;
        int First=0;
        int Second=0;
        for (auto x : set)
        {
          if( x.second>Second)
          {
              First = x.first;
              Second = x.second;
          }
            else if(nums.size()<2)
            {
                First=x.first;
                Second=x.second;
            }
        }
        return First;
    }
};