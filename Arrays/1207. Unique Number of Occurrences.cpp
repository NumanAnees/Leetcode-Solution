class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>myMap;
         set<int>mySet;
        for(int i=0;i<arr.size();i++){
            myMap[arr[i]]++;
        }
        for (auto x : myMap)
            mySet.insert(x.second);
        if(mySet.size()==myMap.size()){
            return true;
        }
        return false;
}
};