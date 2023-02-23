class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string arr1="";
        string arr2="";
        for(int i = 0;i<word1.size();i++){
            arr1 = arr1+word1[i];
        }
        for(int i = 0;i<word2.size();i++){
            arr2 = arr2+word2[i];
        }
        return arr1==arr2;
    }
};