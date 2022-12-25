class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(),k,l;
        //find a peak point....
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        //if not found any peak means it is 4,3,2,1....
        //simply reverse...
        if(k<0){
            reverse(nums.begin(),nums.end());
        }else{
            //we have k just find any element greater than nums[k] from right of k.
            //then swap it with k and reverse from k+1 to end...
            for(l=n-1;l>=0;l--){
                if(nums[k]<nums[l]){
                    swap(nums[k],nums[l]);
                    //In the end simply reverse the array from k+1 to end....
                    reverse(nums.begin()+k+1,nums.end());
                    break;//imp because we only want to swap 1st largest from end...
                }
            }
        }
    }
};