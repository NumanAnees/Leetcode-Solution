class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char, int> freqOfChar;
        for(char c : s) {
            freqOfChar[c]++;
        }
        map<int, string> dupStr;
        for(auto v : freqOfChar) {
            char c = v.first;
            int n = v.second;
            //cout<<"===>"<<string(n,c)<<endl;
            //on nth location append new string c(n times )...
            dupStr[n] += string(n, c);
        }
        string output = "";
        for(auto c:dupStr){
            //cout<<c.first<<" "<<c.second<<endl;
            output=c.second+output;
        }
        return output;
    }
};