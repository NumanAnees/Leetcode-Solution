//-------------------------------------My working solution 100% O(m+n)-------------------------------------
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> ans;
        int p=0,s=0;
        for(int i=0;i<n+m;i++){
            if(arr1[p]<=arr2[s]){
                ans.push_back(arr1[p]);
                p++;
            }
            else{
                ans.push_back(arr2[s]);
                s++;
            }
        }
        return ans[k-1];//k is 1 to n while index is 0 to n...
    }
};
//---------------------------------accepetable on gfg O(log(min(m,n)))------------------------------------------
int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m)return kthElement(arr2,arr1,m,n,k);
        int low=max(0,k-m),high=min(k,n);
        while(low<=high){
            int cut1=(low+high)>>1;
            int cut2=k-cut1;
            int l1=cut1==0?INT_MIN:arr1[cut1-1];
            int l2=cut2==0?INT_MIN:arr2[cut2-1];
            int r1=cut1==n?INT_MAX:arr1[cut1];
            int r2=cut2==m?INT_MAX:arr2[cut2];
            if(l1<=r2&&l2<=r1)return max(l1,l2);
            else if(l1>r2) high=cut1-1;
            else low= cut1 +1;
        }
        return 1;
    }