class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        //push people in stack
        stack<int> st;
        int c;//store potential celebrity...
        for(int i=0;i<n;i++){
            st.push(i);
        }
        //compare top 2 values of stack and make decisions accordingly.....
        while(st.size()>=2){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            //check if first know second or not....
            if(M[first][second]==1){//if first knows second means first is not a celebrity...
                st.push(second);
            }else { //first don't know second then second is not a celebrity...
                st.push(first); //if first dont know second then no need to check if second know first or not because second cant be celebrity then but there is a chance for first...
            }
        }
        //maybe we have our celebrity in stack...
            c = st.top(); //phly top phr pop() because pop not return anything....
            st.pop();
            for(int i=0;i<n;i++){
                    if(i!=c && M[i][c]==0 || M[c][i]==1 ) //celebrity know someone or someone know celebrity...
                    {
                       return -1; //no celebrity 
                    }
            }
        return c; //just esy hi....
    }
};