//-------------------------------------Old appoach striver-------------------------------
class Solution {
public:
    void sortColors(vector<int>& nums) {
    
     int low=0,mid=0,high=nums.size()-1;
    
     while(mid<=high){
       
        switch(nums[mid]){
           
            case 0: swap(nums[mid++],nums[low++]); break;
           
            case 1: mid++; break;
           
            case 2: swap(nums[mid],nums[high--]);break;
                
        }
     }
    }
};
//===============================Why not this best approach?=============================
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ones=0,twos=0,zeros=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                zeros++;
            if(nums[i]==1)
                ones++;
            if(nums[i]==2)
                twos++;
        }
        for(int i=0;i<nums.size();i++){
            if(zeros){
                nums[i]=0;                
                zeros--;
            }
            else if(ones){
                nums[i]=1;
                ones--;
            }
            else if(twos){
                nums[i]=2;                
                twos--;
            }
        }
    }
};