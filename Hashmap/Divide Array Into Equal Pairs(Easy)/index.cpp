class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        for(auto i:m)
        {
            if(i.second&1!=0) return 0; // if frequency of any element is odd then return false
        }
        return 1;
    }
};