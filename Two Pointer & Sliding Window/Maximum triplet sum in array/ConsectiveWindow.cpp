// C++ code to find maximum triplet sum
#include <bits/stdc++.h>
using namespace std;

// This function assumes that there are at least
// three elements in arr[].
int maxTripletSum(int arr[], int n)
{
    cout<<n<<endl;//
    int maxi=INT_MIN;
    int sum=0;
	int left=0,right=left+2;//less than sign not <=
	while(right<n){//why =?
	    //Sum of consecutive 3.....
	    for(int i=left;i<=right;i++){
	        sum+=arr[i];
	        maxi=max(maxi,sum);
	    }
	        left++;
	        right++;
	        sum=0;//after each iteration sum=0 is important....
	}
	return maxi;
}

// Driven code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxTripletSum(arr, n);
	return 0;
}
