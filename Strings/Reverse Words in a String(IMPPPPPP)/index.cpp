//--------------------------------My Approach which does not works for long string input(weird error leetcode)------------------------------------------
class Solution {
public:
    string reverseWords(string s) {
        string output="";
        string temp="";
        for(char i=0;i<s.length();i++){
            char ch= s[i];
            if(ch!=' '){
                 temp+=ch;
            }
            //condition mandatory for case where spaces on end like "  hello world  "......
            else if(temp!=""){
             if (output!="") output=temp+" "+output;
             else output=temp;
             temp="";
            //we are not getting last word because no space after last word....
            //cout<<s[i];
            }
        }
         if (temp!="") {
                if (output!="") output = temp + " " + output;
                else output = temp;
            }
        return output;
    }
};

//-------------------------------------Striver 's Approach which works for long string input------------------------------------

class Solution {
public:
    string reverseWords(string s) {
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        }
        //condition mandatory for case where spaces on end like "  hello world  "......
        else if (temp!="") {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    //last k baad no space
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
    }
};

