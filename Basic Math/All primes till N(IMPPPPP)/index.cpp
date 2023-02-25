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
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        //n+1 because on input 0 gives runtime error
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                count++;
                   
                for(int j=i*2;j<n;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        return count;
    }
};

//======================================Array return instead of count=================================
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<int> ans;
        //n+1 because on input 0 gives runtime error
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                count++;
                ans.push_back(i);//i is a prime number....
                for(int j=i*2;j<n;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        for(auto x:ans){
            cout<<x<<",";
        }
        return count;
    }
};