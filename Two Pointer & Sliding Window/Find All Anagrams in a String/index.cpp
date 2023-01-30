//-----------------------------------My effiecient Solution(23/60)-------------------------------------
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.length()>s.length()) return ans; //return empty because no anagram can exist
        for(int i=0;i<s.length();i++){
            string temp=p;
            if(temp.find(s[i])<temp.length()){
                temp.erase(temp.find(s[i]),1);//remove that character.....
                int index=i;
                for(int j=i+1;j<i+p.length();j++){ //sliding window kind...
                    if(temp.find(s[j])<temp.length()){
                        temp.erase(temp.find(s[j]),1);//erase from temp inner loop....
                    }
                }
                //check if temp.length()==0 if true then it is an anagram.
                if(temp.length()==0) ans.push_back(index);
            }
        }
        return ans;
    }
};
//-----------------------------------Working--------------------------------------------------
//use my eff...
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> output;
        if (s.size() < p.size())  return output;
        vector<int> counter(26);
        for (const auto& ch : p) {
            counter[ch - 'a']++;
        }
        for (int beg = 0, end = 0; end < s.size(); end++) {
            counter[s[end] - 'a']--;
            while (beg <= end && counter[s[end] - 'a'] < 0) {
                counter[s[beg++] - 'a']++;
            }
            if (end - beg + 1 == p.size()) {
                output.emplace_back(beg);
            }
        }
        return output;
    }
};