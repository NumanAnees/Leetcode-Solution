class Solution {
public:
    bool detectCapitalUse(string word) {
        //check for reverse condition---->how many capitals----------------
        int n = word.size();
        int Capitals = 0;
        
        for(int i=0;i<n;++i){
            if(word[i]>='A' && word[i]<='Z') Capitals++;
        }
        
        if(Capitals==n || Capitals==0 || (word[0]>='A' && word[0]<='Z' && Capitals==1))
        {
            return true;
        }
        return false;
    }
};