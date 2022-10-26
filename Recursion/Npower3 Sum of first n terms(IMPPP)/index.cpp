class Solution {
  public:
  //will only execute once that's why sum variable is here....
    long long int sum=0;
    long long sumOfSeries(long long N) {
        if(N>50000 || N<1){
          return 0;
        }
        //No recusrsion...
        //sum=N*N*N+sumOfSeries(N-1);
        sum = N*(N+1)/2;
        return sum*sum;
    }
};