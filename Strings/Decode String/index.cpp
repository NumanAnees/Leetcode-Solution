class Solution {
public:
    string decodeString(string s) {
        if(s.size()==1 && s[0]>='a' && s[0]<='z') return s; //base case..."a"=>a
        if(s.size()==1) return ""; //base case..."1"=>""
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']') {
                st.push(s[i]);
            }
            else{
                string curr_str = "";
                
                while(st.top() != '['){
                    curr_str = st.top() + curr_str ;
                    st.pop();
                }
                
                st.pop();   // for '['
                string number = "";
                
                // for calculating number
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                int k_time = stoi(number);    // convert string to number
                
                while(k_time!=0){
                    for(int p = 0; p < curr_str.size() ; p++){
                        st.push(curr_str[p]);
                    }
                    k_time--;
                }
            }
        }
        
        s = "";
        while(!st.empty()){
            s = st.top() + s; //no reverse required....
            st.pop();  
        }
        return s;
        
    }
};
