class Solution {
public:
    int firstUniqChar(string s) {
        //store in unordered_map
        unordered_map<char,int> umap;
        for(auto ch:s){
            umap[ch]++;
        }
        //we have to find first unique so it is mandatory to loop through and find fist element with count 1...
        for(int i=0;i<s.length();i++){
          auto count = umap[s[i]];
          if(count==1){
              return i;
          }
        }
        return -1;
    }
};