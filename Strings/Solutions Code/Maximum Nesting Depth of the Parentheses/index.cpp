class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxOpen=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
                maxOpen=max(maxOpen,count);
             }
             else if(s[i]==')'){
                 count--;
             }
        }  
        return maxOpen;
    }
};