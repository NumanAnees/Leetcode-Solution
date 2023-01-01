class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1; 
        int itr = 0;
        for(int i=0;i<=nums.size()-1;i++)
        {
            if(nums[i]!=0)
            {
                itr++;
            }
        }
        while(i<itr)
        {
            if(nums[i]==0)
            {
                
                if(nums[j]!=0)
                {
                    swap(nums[i],nums[j]);
                    i++;
                }else
                {
                    j++;
                }
            
            }
            else{
                i++;
                j++;
            }
        }
        
    }
};