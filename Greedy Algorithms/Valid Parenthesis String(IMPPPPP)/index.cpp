class Solution {
public:
    bool checkValidString(string s) {
        //store indexes in the stacks...
        stack<int> open;
        stack<int> star;
        //check character.......
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                open.push(i); //push index...
            }
            else if(s[i]==')'){
                if(!open.empty()) open.pop();
                else if(!star.empty()) star.pop();
                else return false;
            }
            else if(s[i]=='*'){
                star.push(i);//push index...
            }
        }
        while(!open.empty() && !star.empty()){
            //if index of '(' is greater than (we move from top to bottom==right to left==greater to lesses in open stack) * index then return false...
            if(open.top()>star.top()){
                return false; //case '*(()'
            }
            else{
                open.pop(); //case '((*)**'
                star.pop();
            }
        }
        return open.empty(); //return true if open stack empty bcz we can consider remaining * as empty...
    }
};