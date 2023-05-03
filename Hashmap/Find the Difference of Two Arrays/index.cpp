class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1;
        vector<int> ans2;
        
        set<int> uset1;
        set<int> uset2;
        
        unordered_map<int,int> umap;
        //put 2nd array in map...
        for(auto x:nums2){
            umap[x]=1;
        }
        for(auto x:nums1){
            if(umap.find(x)==umap.end()){ //not found...
                uset1.insert(x);
            }
        }
        //clear map....
        umap={};
        //put 1st array in map...
        for(auto x:nums1){
            umap[x]=1;
        }
        for(auto x:nums2){
            if(umap.find(x)==umap.end()){ //not found...
                uset2.insert(x);
            }
        }
        for(auto x:uset1){
            ans1.push_back(x);
        }
        
        for(auto x:uset2){
            ans2.push_back(x);
        }
        return {ans1,ans2};
    }
};