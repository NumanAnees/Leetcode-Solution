class Solution {
  public:
    string armstrongNumber(int n){
        int temp=n;
        int ans=0;
        while(temp!=0){
            int rem=temp%10;
            temp=temp/10;
            //logic here
            ans=ans+rem*rem*rem;
        }
        if(ans==n){
            return "Yes";
        }
        return "No";
    }
};