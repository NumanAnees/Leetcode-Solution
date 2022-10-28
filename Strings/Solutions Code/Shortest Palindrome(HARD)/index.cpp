//--------------------------MY mind blowing solution passed all cases just TLE--------------------------------
class Solution {
public:
    string shortestPalindrome(string s) {
        int endPointer=s.length()-1;
        int start = 0;
        int end = s.length()-1;
        string temp="";
        while(start<end){
             if(s[start]==s[end]){
                 start++;
                 end--;
             }else{
                 temp.push_back(s[endPointer]);
                 endPointer--;
                 start=0;
                 end=endPointer;
                 if(end==0){
                     break;
                 }  
             }
        }
        
        temp=temp+s;
        return temp;
    }
};