int equalIndex(vector<int> &arr, int n){	
    int start = 0;
    int end = n;
    int mid = (start+end)/2;
    while(start<=end){
        if(mid==arr[mid]){
            return mid;
        }
        else if(mid>arr[mid]){
            start=mid+1;
            mid=(start+end)/2;
        }
        else if(mid<arr[mid]){
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    return -1;
}