class Solution {
public:
    string removeDuplicates(string s) {
       int i=0;
        while(s.length()!=0 && i<s.length() )
       {
           if(s[i]==s[i+1])
           {
               string str="";
               str.push_back(s[i]);
               str.push_back(s[i]);
               s.erase(s.find(str),2);
               i=0;//or i=i-1;
           }
            else{
            i++;
            }
       }
       return s; 
    }
};

//-----------------------------------Without time limit warning-----------------------
class Solution {
public:
    string removeDuplicates(string s) {
      int i = 0, n = s.length();
        for (int j = 0; j < n; j++, i++) {
            s[i] = s[j];
            if (i > 0 && s[i - 1] == s[i]) // count = 2
                i -= 2;
        }
        return s.substr(0, i);
    }
};