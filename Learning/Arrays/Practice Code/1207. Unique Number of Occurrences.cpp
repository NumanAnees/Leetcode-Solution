class Solution {
public:
bool uniqueOccurrences(vector& arr) {
unordered_map<int,int>myMap;
setmySet;
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