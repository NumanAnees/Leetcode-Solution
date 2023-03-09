class Solution {
public:
    int tribonacci(int n) {
        if(n<=1) return n;
        int prev3=0;//base case for 0
        int prev2=1;//base case for 1
        int prev1=1;//base case for(3rd num is 1 therefore,bottom up approach...)
        for(int i=3;i<=n;i++){
            int curr=prev1+prev2+prev3;
            prev3=prev2;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};