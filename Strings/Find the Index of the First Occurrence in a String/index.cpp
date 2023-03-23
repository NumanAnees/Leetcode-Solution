class Solution {
public:
    int strStr(string haystack, string needle) {
       int index = haystack.find(needle);
        return index<haystack.size()?index:-1;
    }
};