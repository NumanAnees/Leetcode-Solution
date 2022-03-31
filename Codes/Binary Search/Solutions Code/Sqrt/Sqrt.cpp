class Solution {
public:
    long long int binarySearch(int start,int end,int target){
        int s = start;
        int e = end;
        long long int m = (s+e)/2;
        long long int result= -1;
        while(s<=e){
           long long int K = m*m;
            if(K==target){
              return m;  
            }
            else if(K<target){
                result = m;
                s=m+1;
            }
            else{
                e = m-1;
            }
            m = (s+e)/2; 
        }
        return result;
    }
    int mySqrt(int x) {
       return binarySearch(0,x,x);
        
    }
};