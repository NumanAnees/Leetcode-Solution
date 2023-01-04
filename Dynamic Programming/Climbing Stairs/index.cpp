class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n; //test-case 1;
        //Tabulation method => bottom-up approach...we know bottom ans....
        int prev2=1; //if 0 return 1..
        int prev=1; // if 1 return 1..
        int curr = INT_MIN;
        for(int i=2;i<=n;i++){
            curr = prev + prev2;
            prev2 = prev;
            prev = curr;
        }
        return curr;
    }
};