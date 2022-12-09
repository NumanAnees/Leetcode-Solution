class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        //moves for a....
        for(int i=0;i<nums.size()-2;i++){//because 0 to 3rd last
            if(i==0 || (i>0 && nums[i] !=nums[i-1])){
                int low = i+1,high=nums.size()-1,sum=0-nums[i];
                //when val 3 sum will be -3 so find -1 and -2....
                while(low<high){
                    if(nums[low]+nums[high]==sum){
                        ans.push_back({nums[i],nums[low],nums[high]});
                        //ignore all next duplicates...
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        //reached when different move 1 more because exp:
                        //3,2,-1,-1,4,6,7 in -1 case -1 is already present
                        low++;high--;
                    }
                    else if(nums[low]+nums[high]<sum){//sum larger than low+high move forward low ..(sorted) 

                        low++;
                    }
                    else{//sum smaller than low+high move back high..(sorted) 
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};