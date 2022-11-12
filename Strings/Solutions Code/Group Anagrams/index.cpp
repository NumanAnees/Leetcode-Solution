class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        // Base case
		if(strs.size() == 1)
            return {{strs[0]}};
        //1st: Sorting each string,pushing in map and count then making array from count... 
        //-------------------2nd solution and perfect------------------------------------
        //Creating hashmap...
        unordered_map<string,vector<string>> umap;
        //sorting and pushing in hashmap... where key is sorted string and array is words matched....
        for(int i=0;i<strs.size();i++){
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end()); // Sorting the string
            umap[strs[i]].push_back(str);  // Sorted string is the key and the value is the initial string
        }
        // Traversing the map and adding the vectors of string to ans
        for(auto x:umap){
           ans.push_back(x.second);
        }
        return ans;
    }
};