// C++ program to find the number of indices pair
// such that pair sum from first Array
// is greater than second Array

#include <bits/stdc++.h>
using namespace std;

// Function to get the number of pairs of indices
// {i, j} in the given two arrays A and B such that
// A[i] + A[j] > B[i] + B[j]
int getPairs(vector<int> A, vector<int> B, int n)
{
	// Initializing the difference array D
	vector<int> D(n);

	// Computing the difference between the
	// elements at every index and storing
	// it in the array D
	for (int i = 0; i < n; i++) {
		D[i] = A[i] - B[i];
	}

	// Sort the array D
	sort(D.begin(), D.end());

	// Variable to store the total
	// number of pairs that satisfy
	// the given condition
	long long total = 0;

	// Loop to iterate through the difference
	// array D and find the total number
	// of pairs of indices that follow the
	// given condition
	for (int i = 0; i < n; ++i) {

		// If the value at that index is negative or zero
		// then we need to find the index of the
		// value just greater than -D[i]
		if (D[i] <= 0) {
			int k = upper_bound(D.begin(), D.end(), -D[i])
					- D.begin();
			total += n - k;
		}

		// If the value at the index is positive
		// then we need to find the value of ⁿ⁻ᶦC₂
		// and break
		else {
			total += (n - i) * (n - i - 1) / 2;
			break;
		}
	}
	return total;
}

// Driver code
int main()
{
	int n = 5;
	vector<int> A;
	vector<int> B;

	A.push_back(4);
	A.push_back(8);
	A.push_back(2);
	A.push_back(6);
	A.push_back(2);

	B.push_back(4);
	B.push_back(5);
	B.push_back(4);
	B.push_back(1);
	B.push_back(3);

	cout << getPairs(A, B, n);
}
