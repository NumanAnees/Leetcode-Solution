class Solution {
public:
    int longestValidParentheses(string s) {
       int maxi;
       stack<char> st;
       stack<int>index;
       index.push(-1);
       for(int i = 0;i<s.length();i++){
           if(s[i]=='('){ //if oppening bracket....
               st.push('(');
               index.push(i);
           }
           else{//else closing bracket check top....
               if(!st.empty() && st.top() == '('){
                   st.pop();
                   index.pop();
                   maxi = max(maxi,i-index.top());
               }
               else{//add index i to stack bcoz its dead end...
                   index.push(i);
               }
           }
       }
        return maxi;
    }
};