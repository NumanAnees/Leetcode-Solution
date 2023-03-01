//----------------------------------------space is O(1)------------------------------------------
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        int i=-1;
        for(auto& ch:s){
            if(ch=='(' || ch=='{' || ch=='[')
                s[++i]=ch;
            else{
                if(i>=0 && ((s[i]=='(' && ch==')') || (s[i]=='{' && ch=='}') || (s[i]=='[' && ch==']')))
                    i--;
                else
                    return false;
            }
        }
        return i==-1;
    }

};

//----------------------------------------space is O(n)-------------------------------------------
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        for(int i=0;i<x.length();i++){
            if(st.empty()) st.push(x[i]);
            else if(x[i]=='(' || x[i]=='{' || x[i] == '['){
                st.push(x[i]);
            }
            else{
               char val=st.top();
               if(val=='(' && x[i]==')' || val=='{' && x[i]=='}' || val=='[' && x[i]==']') st.pop();
               else return false;
            }
        }
      return st.empty(); //check if stack is empty or not in the end...
    }

};