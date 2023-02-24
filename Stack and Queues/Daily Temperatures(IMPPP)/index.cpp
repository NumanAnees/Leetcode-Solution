class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> arr(temperatures.size(),0);  //initialize with 0...
        stack<int> st; //{index}
        for(int i=0;i<temperatures.size();i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                arr[st.top()] = i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return arr;
    }
};