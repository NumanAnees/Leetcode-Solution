class Solution {
public:
    bool checkRecord(string s) {
        unordered_map<char,int> umap;
        int consLate=INT_MIN;
        int late=0;
        for(auto c:s){
            umap[c]++;
        }
        //if more than 2 absents...
        if(umap['A']>=2) return false;
        //if consecutive 3 late...
        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                late++;
                while(s[i+1]=='L'){
                    late++;
                    i++;
                }
                consLate=max(consLate,late);
                late=0;
            }
        }
        if(consLate>=3) return false;
        return true;
    }
};