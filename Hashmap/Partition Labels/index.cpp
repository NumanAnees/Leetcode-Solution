class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> umap;
        for(int i=0;i<s.length();i++){
            umap[s[i]]=i; //stored the character and its last position in map....
        }
        int size=0;
        int last=0;
        for(int i = 0; i < s.size(); i++){
            last = max(last, umap[s[i]]); //update the last (boundry).....
            if(last == i){
                // partition time
                ans.push_back(size+1); //bcoz starting from 0....
                size = 0;
            }
            else{
                size++;
            }
        }
        return ans;
    }
};