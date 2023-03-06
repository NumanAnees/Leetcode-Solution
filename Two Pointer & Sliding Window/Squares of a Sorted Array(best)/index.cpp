class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            if(abs(nums[left]*nums[left])>abs(nums[right]*nums[right])){
                int number = nums[left]*nums[left];
                ans.push_back(number);
                left++; //increase please....
            }else{
                int number = nums[right]*nums[right];
                ans.push_back(number);  
                right--;
            }
        }
        //remeber to reverse the array....
        reverse(ans.begin(),ans.end());
        return ans;
    }
};