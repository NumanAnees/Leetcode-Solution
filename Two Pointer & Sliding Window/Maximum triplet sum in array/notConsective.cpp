// C++ code to find maximum triplet sum
#include <bits/stdc++.h>
using namespace std;

// This function assumes that there are at least
// three elements in arr[].
int maxTripletSum(int arr[], int n)
{
	// Initialize Maximum, second maximum and third
	// maximum element
	int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;

	for (int i = 0; i < n; i++) {

		// Update Maximum, second maximum and third
		// maximum element
		if (arr[i] > maxA) {
			maxC = maxB;
			maxB = maxA;
			maxA = arr[i];
		}

		// Update second maximum and third maximum
		// element
		else if (arr[i] > maxB) {
			maxC = maxB;
			maxB = arr[i];
		}

		// Update third maximum element
		else if (arr[i] > maxC)
			maxC = arr[i];
	}

	return (maxA + maxB + maxC);
}

// Driven code
int main()
{
	int arr[] = { 10, 1, 8, 6, 4, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxTripletSum(arr, n);
	return 0;
}
