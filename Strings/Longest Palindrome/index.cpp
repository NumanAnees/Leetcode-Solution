class Solution {
public:
    int longestPalindrome(string s) {
        //put everything in map and count...
        unordered_map<int,int> umap;
        for(auto ch:s){
            umap[ch]++;
        }
        //check if odd or count is even....
        int count=0;
        int odds = 0;
        for(auto each:umap){
            if(each.second%2==0){
                count=count+each.second;  //all c are part of palindrome
            }else{
                count=count+each.second-1; //for odd
                odds++;
            }
        }
        //if odds more than 0 add 1
        if(odds>0) count++;
        return count;
    }
};