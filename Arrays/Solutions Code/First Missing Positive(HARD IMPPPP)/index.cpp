class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    if(nums.size()==0) return 1;
    int n = nums.size(),containsOne=0;
    //step 1: check if original 1 present or not....
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            containsOne=1;
        }else if(nums[i]<=0 || nums[i]>n){
            nums[i]=1;
        }
    }
    if(containsOne==0) return 1;
    //step 2: use array as map and mark -ve...
    for(int i=0;i<n;i++){
        int index = abs(nums[i])-1;
        if(nums[index]>0) nums[index]=nums[index]*-1;//make -ve
    }
    //step 3: find first number which is +ve...
    int ans=n+1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans=i+1;
            break;//imp because find first +ve
        }
    }
    return ans;
    }
};