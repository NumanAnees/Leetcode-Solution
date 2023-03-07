class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     unordered_map<int,int> umap;
     stack<int> stk;
     vector<int> ans;
     //maintain map where key is arr[i] and value is its next greater...
     //size()-1 otherwise buffer overflow ofcourse....
     for(int i=nums2.size()-1;i>=0;i--){
         while(stk.size() && stk.top()<=nums2[i]){
                stk.pop();//we don't need small values bcoz curr will be the nge of next part....
         }
         if(stk.empty()){
             umap[nums2[i]]=-1;
             stk.push(nums2[i]);//push curr as it can be a nge of any element...
         }
         else{
             umap[nums2[i]]=stk.top();
             stk.push(nums2[i]);//push curr as it can be a nge of any element...
         }
     }
        for(auto num:nums1){
            ans.push_back(umap[num]); //num is the key...
        }
       
        return ans;
    }
};