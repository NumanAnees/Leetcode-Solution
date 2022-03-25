//--------------------------- Complexity O(n*n)-------------------------------
class Solution {
public:
   bool checkPrime(int n){
       if(n<=1)
           return false;
       for(int i=2;i<n;i++)
       {
           if(n%i==0)
           {
               return false;
           }
           
       }
       return true;
   }
    int countPrimes(int n) {
        int count=0;
        for(int i=0;i<n;i++)
            if(checkPrime(i))
            {
                count++;
            }
         return count;
    }
   
};
//----------------------------------Better Approach-------------------------------