
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        //we can do this without creating a bool variable
        //bool flag=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return 0;
            }
        }
        return 1;
    }
};