// C++ implementation of simple method to
// find count of pairs with given sum.
#include <bits/stdc++.h>
using namespace std;

// Returns number of pairs in arr[0..n-1] with sum equal
// to 'sum'
int getPairsCount(int arr[], int n, int k)
{
	unordered_map<int, int> m;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (k%arr[i]==0 && m.find(k / arr[i]) != m.end()) { //if remainder is 0
			//count += m[k - arr[i]];
			cout<<arr[i]<<endl;
			count++;
		}
		m[arr[i]]++;
	}
	return count;
}

// Driver code
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,12,13,10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 20;

	// Function Call
	cout << "Count of pairs is "
		<< getPairsCount(arr, n, sum);
	return 0;
}
