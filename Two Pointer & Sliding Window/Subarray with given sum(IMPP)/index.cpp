class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        if(s==0) return {-1};//weird base case....
        int left=0,right=0;
        int sum=0;
        while(right<=n){
            if(sum==s){
                return {left+1,right};
            }
            else if(left==right || sum<s){
                sum+=arr[right];
                right++;
            }
            else if(sum>s){
                sum-=arr[left];
                left++;
            }
        }
        return {-1};
        
    }
};