class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0,end=nums.size()-1;//-1 imp
        while(start<end)//not = imp
        {
            int mid=start+(end-start)/2;
            bool even_length=(end-mid)%2==0;//right part even or not.
            if(nums[mid]==nums[mid+1])
            {
                if(even_length)
                    start=mid+2;//select right
                else
                end=mid-1;//select left
            }
            else if(nums[mid]==nums[mid-1])
            {
                if(even_length)
                    end=mid-2;//select left
                else
                    start=mid+1; //select right
            }
            else
                return nums[mid];
        }
        return nums[start];
    }
};