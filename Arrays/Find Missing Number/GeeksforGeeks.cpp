
int missingNumber(int A[], int N)
{

        int sum1=0;
        int sum2=0;
        //N-1 because array and N for vector beacuse vector.size() returns actual number for example for:
        //[0,1,3] it will return 3 not 2 but here they are adding initially and also no 0 is present in array start from 1.
        //In arrays think about N-1. only in this problem....
        for(int i=0;i<N-1;i++){
            sum1=sum1+A[i];
        }
        //formula for sum of N natural numbers
        //Use N not N-1 here because the arrray consist of values from 1 to N not 0 to n like leetcode 
        sum2 = N*(N+1)/2;
        int ans = sum2-sum1;
        return ans;
}