class Solution {
private:
    //palindrome function....
    bool isPalindrome(string s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }else{
                start++;
                end--;
            }
        }
        return true;
    }
    //recursive function....
    void func(int index,string s,vector<string> &path,vector<vector<string>> &ans){
        //base case....
        if(index==s.size()){
            ans.push_back(path);
        }
        //not base case....
        for(int i=index;i<s.size();i++){ //partition only if it is palindrome....
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                func(i+1,s,path,ans);
                path.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        func(0,s,path,ans);
        return ans;
    }
};