class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' ||s[i]=='{' || s[i]=='[' ){
                stk.push(s[i]);
            }
            else{
                if(stk.size() == 0) return false; //in case first is '}'
                char ch = stk.top();
                stk.pop();
                if( ch=='(' && s[i]==')' || ch=='{' && s[i]=='}' || ch=='[' && s[i]==']' ){
                    continue;
                }
                else{
                    return false;
                }
            }
        }
        //use stk.empty() instead of true so we don't have to check input is odd or even..
        return stk.empty(); //it has to be empty if even number of brackets and valid...
    }
};