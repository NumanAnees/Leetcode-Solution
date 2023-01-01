class Solution {
public:
    bool checkString(string s) {
        int check;
        bool ans = true;
        for (int i = 0;i<s.length();i++)
             {
                 if(s[i]=='b')
                 {
                     check = i;
                     break;
                 }
             }
        if(check>=0){
        for(int j = check; j<s.length();j++)
        {
            if(s[j]=='a')
            {
                ans = false;
                break;
            }
        }
        }
        
        return ans;
        
    }
};