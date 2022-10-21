class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here

        long long maxi=INT_MIN;

        long long sum=0;

        for(int i=1;i<N;i++){
        //no if condition because we are finding the pairr not the sub array whole......
          sum=arr[i]+arr[i-1];
         //instead of if condition we can use max function...
         //maxi=max(maxi,sum);
         //using if condition instead of max function....
         if(sum>maxi){
             maxi=sum;
         }
        }
        //maxi only returns the pair which has the highest sum.....
        return maxi;
        }
};