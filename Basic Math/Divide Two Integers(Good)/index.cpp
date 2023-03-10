class Solution {
public:
    int divide(int dividend, int divisor) {
        //weird problem conditions.....
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        
        //-ve to +ve
        long int dd = abs(dividend), dv = abs(divisor);
     
        int res=0;
        while(dv<=dd) {
            long int sum=dv, count=1;
            while(sum<=dd-sum) { //why -sum??? seee ss
                sum+=sum;
                count+=count; //reason of -sum
            }
            res+=count;
            dd-=sum;
        }
        //-a/b or a/-b is -ve but -a/-b give +ve....
        if((dividend<0&&divisor>0) || (dividend>0&&divisor<0)) return -res;   
        return res;
          
    }
};