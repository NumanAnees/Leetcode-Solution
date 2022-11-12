class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        //----------------Prefix----------------------
        int prefix=1;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                output.push_back(prefix);
            }
            else{
                prefix=prefix*nums[i-1];//want prev value(prefix)....
                output.push_back(prefix);
            }
        }
        //----------------Postfix----------------------
        int postfix=1;
        for(int i=nums.size()-1;i>=0;i--){ //very important array size 4 but indexes 3...
            if(i==nums.size()-1){
                output[i]=output[i]*postfix;
            }
            else{
                postfix=postfix*nums[i+1];//want n+1 value(postfix)....
                output[i]=output[i]*postfix;
            }
        }
        return output;
    }
};