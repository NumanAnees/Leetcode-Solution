//------------------------------------------Better Solution----------------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
    }
};

//----------------------------With more space complexity and can be nlogn----------------------------

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
