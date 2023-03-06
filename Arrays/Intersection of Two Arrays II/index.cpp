class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // the variable for frequency of value (how much the value was repeated) 
        unordered_map<int, int> freq;
        vector<int> res;
        
        // the frequency for the first vector
        for (auto num : nums1) freq[num]++;
        
        for (auto num : nums2) {
            // if the value exist in the second vector push it in res and decrement the freq[num] 
            if (freq[num]) {
                res.push_back(num);
                freq[num]--;
            }
        }
        
        return res;
    }
};