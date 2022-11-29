class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char> sumap;
        unordered_map<char,char> tumap;
        //for s....
        for(int i=0;i<s.length();i++){
            if(sumap.find(s[i])!=sumap.end()){
                 char prevCh=sumap[s[i]];
                if(prevCh!=t[i]){
                    return false;
                }
            }
            else{
            sumap[s[i]]=t[i];
            }
        }
        //for t....
        for(int i=0;i<t.length();i++){
            if(tumap.find(t[i])!=tumap.end()){
                 char prevCh=tumap[t[i]];
                if(prevCh!=s[i]){
                    return false;
                }
            }
            else{
            tumap[t[i]]=s[i];
            }
        }
        return true;
    }
};