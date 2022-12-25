class Solution {
public:
    bool isPowerOfThree(int n) {
	    if(n <= 1) return n == 1;
	    return n % 3 == 0 && isPowerOfThree(n / 3);//inp: 23 if for any n=n/3 it is false our ans should be false.
    } 
};