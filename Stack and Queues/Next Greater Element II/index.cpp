class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     stack<int> stk;
     vector<int> ans(nums.size(),-1);//initialize with -1...
     int n = nums.size();
     int m = 2*n-1;
     //size()-1 otherwise buffer overflow ofcourse....
     for(int i=m;i>=0;i--){
         while(stk.size() && stk.top()<=nums[i%n]){
                stk.pop();//we don't need small values bcoz curr will be the nge of next 
         }
         if(i<n){
             //no need to handle -1 case because array is already initialized with -1;
            if(!stk.empty()){
                ans[i%n]=stk.top();//don't push direct otherwise you have to reverse...
            }
         }  
         stk.push(nums[i%n]);//don't push direct otherwise you have to reverse...
     }
     return ans;
    }
};