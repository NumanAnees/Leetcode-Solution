/*Sum of squares of digits always ends in 1 or 89.
For example,

44 → 32 → 13 → 10 → 1 → 1
85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
*/
class Solution {
public:
    bool isHappy(int n) {
        if(n==89) return false;
        else if(n==1) return true;
        int sum=0;
        while(n>0){
            sum=sum+((n%10)*(n%10));
            n=n/10;
        }
        return isHappy(sum);
    }
};