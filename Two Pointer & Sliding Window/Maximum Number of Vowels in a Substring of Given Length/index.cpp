class Solution {
private:
    bool check(char ch){
        if(ch=='a'||ch== 'e'||ch== 'i'||ch== 'o'||ch== 'u'){
            return true;
        }
        else{
            return false;
        }
    }
public:
    int maxVowels(string s, int k) {
     int maxCount=INT_MIN;
     int currCount=0;
     int l=0,r=0;
     while(r<=s.length()){
         if(r-l<k){
             if(check(s[r])) currCount++;
             r++;
         }
         else{
             maxCount = max(maxCount,currCount);
             if(check(s[l])) currCount--;
             l++;
         }
     }
        return maxCount;
    }
};