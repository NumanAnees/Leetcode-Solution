class Solution {
public:
    vector<string>ans;
    vector<string>generateParenthesis(int n) {
        helper("",n,n);
        return ans;
    }
    void helper(string temp, int open, int close){
        if(open==0 && close==0){
            ans.push_back(temp);
            return;
        }
        //1 step open:1 step close so 2 directions on every node.
        if(open>0)helper(temp+"(",open-1,close);
        if(open<close)helper(temp+")",open,close-1);
    }
};