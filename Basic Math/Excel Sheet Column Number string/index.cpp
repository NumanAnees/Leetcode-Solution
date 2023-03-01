class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        for(auto c:columnTitle){
            int d=c-'A'+1; //return ascii starts from 1 not 0
            result=result*26+d;
        }
        return result;
    }
};