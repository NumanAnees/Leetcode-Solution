class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     stack<string> st;
     for(auto x : tokens){
         if(x=="+" || x=="*" || x== "/" || x == "-"){
             int a = stoi(st.top());
             st.pop();
             int b = stoi(st.top());
             st.pop();
             int ans;
             //apply operator on a b and push result in stack....
             if(x=="+"){
                 ans=b+a; //b then a......
             }else if(x=="-"){
                 ans=b-a;
             }else if(x=="*"){
                 ans=b*a;
             }else{
                 ans=b/a;
             }
             st.push(to_string(ans));
             
         }else{
             st.push(x); //simply push in stack...
         }
     }
        return stoi(st.top());
    }
};