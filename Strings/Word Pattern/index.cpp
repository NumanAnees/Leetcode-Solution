class Solution {
public:
    bool wordPattern(string pattern, string s) {
        //convert s array of char into array of string.......
        //usefull technique.....
        vector<string> st;
        // word variable to store word
        string word;
 
        // making a string stream
        stringstream iss(s);
 
        // Read and print each word.
        while (iss >> word)
            st.push_back(word);
        //-------------------Now real part---------------------
        if(pattern.length()!=st.size()) return false;
        unordered_map<char,string> pumap;
        unordered_map<string,char> sumap;
        //for pattern....
        for(int i=0;i<pattern.length();i++){
            if(pumap.find(pattern[i])!=pumap.end()){
                string prevCh=pumap[pattern[i]];
                if(prevCh!=st[i]){
                    return false;
                }
            }
            else{
            pumap[pattern[i]]=st[i];
            }
        }
        //for string....
        for(int i=0;i<st.size();i++){
            if(sumap.find(st[i])!=sumap.end()){
                char prevCh=sumap[st[i]];
                if(prevCh!=pattern[i]){
                    return false;
                }
            }
            else{
            sumap[st[i]]=pattern[i];
            }
        }
        return true;
    }
};