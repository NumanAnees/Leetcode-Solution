class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char ,int> umap;
        int length=0 , maxlength=0,left=0;
        for(int i=0 ;i<s.size(); i++){
            umap[s[i]]++;
            length++;
                while(umap[s[i]]>1){
                    umap[s[left]]--;
                    left++;
                    length--;
                }
            maxlength = max(maxlength,length);
        }
        return maxlength;
    }
};