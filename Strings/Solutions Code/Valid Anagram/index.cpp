class Solution {
public:
    bool isAnagram(string s, string t) {
      if (s.size()!=t.size()) return false; //size different frequency differ
      if (s==t) return true; //already same..
      unordered_map<char, int> umap;
         for (int i=0; i<s.size(); i++) {
            umap[s[i]]++;
            umap[t[i]]--;
        }
        for (auto x : umap){
            if(x.second != 0){
                return 0;
            }
        }
        return 1;
    }
};