class Solution {
public:
    double myPow(double x, int n) {
      if(n==0) return 1;
      if(n<0){
       n = abs(n);//-n becomes n.
        x = 1/x;//x becomes 1/x.
      }
      if(n%2==0) return myPow(x*x,n/2);//2pow6 equals 4pow3==64
      else return x*myPow(x,n-1);//odd power case, return x*recursive call to make it even..
    }
};
