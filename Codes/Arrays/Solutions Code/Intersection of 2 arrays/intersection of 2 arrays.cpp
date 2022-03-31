class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        unordered_set<int> ans;

        for(int i=0;i<nums1.size();i++)
        {
            s.insert(nums1[i]);
        }
        for(int i = 0; i<nums2.size();i++)
        {
            if(s.find(nums2[i])!=s.end())
            {
                ans.insert(nums2[i]);
            }
        }
        unordered_set<int> :: iterator itr;
        vector<int> result;
        for (itr = ans.begin(); itr != ans.end(); itr++)
        {
            result.push_back(*itr);  
        }
        return result;
    }
};