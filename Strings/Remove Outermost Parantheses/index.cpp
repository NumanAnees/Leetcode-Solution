//---------------------------------------Better Approach-----------------------------------------------------
class Solution {
public:
    string removeOuterParentheses(string S) {
        string res;
        int opened = 0;
        for (char c : S) {
            if (c == '(' && opened++ > 0) res += c;
            if (c == ')' && opened-- > 1) res += c; //remember 1 here....
            //automatically ignores outer...
        }
        return res;
    }
};

//----------------------------My approach work perfectly for 1 child-----------------------------------------

//-------------------Works for "(()())(())" does not work for "(()())(())(()(()))"---------------------------

class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        //count how many paranthese like=>(()())=>2
        for(char i=1;i<s.length();i++){
            char left='(';
            char right=')';
            if(s[i-1]==left && s[i]==right){
                count++;
            }
        }
        //Now generate and return count number of parantheses
        string output="";
        for(int i=0;i<count;i++){
            output = output + "()";
        }
    return output;
    }
};
