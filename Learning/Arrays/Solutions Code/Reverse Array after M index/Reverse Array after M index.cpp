void reverseArray(vector<int> &arr , int m)
{
		int start = m+1;
        int end = arr.size()-1;
        while(end>start)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start=start+1;
            end = end-1;
        }
}
