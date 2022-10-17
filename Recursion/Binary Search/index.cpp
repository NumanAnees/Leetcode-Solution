int BS(int *arr, int s, int e , int k ) {
    if(s>e)
        return -1;

    int mid = s + (e-s)/2;

    //element found
    if(arr[mid] == k)
        return mid;

    if(arr[mid] < k) {
        return BS(arr, mid+1, e, k);
    }
    else{
        return BS(arr, s, mid-1, k);
    }
}

int binarySearch(int *input, int n, int val)
{
	return BS(input,0,n-1,val);
}