//-----------------------------------My Bad solution----------------------------------
class Solution{
  public:
    int minJumps(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) return -1;
        i=i+arr[i];
        ans++;
        if(i>n){
            break;
        }
        
    }
    return ans;
    }
};
