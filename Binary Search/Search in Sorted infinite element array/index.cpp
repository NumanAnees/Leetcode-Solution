// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Simple binary search algorithm
int binarySearch(int arr[], int target, int start, int end)
{
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (target < arr[mid]) {
			end = mid - 1;
		}
		else if (target > arr[mid]) {
			start = mid + 1;
		}
		else {
			// ans found
			return mid;
		}
	}
	return -1;
}


// an algorithm that finds an element in an
// array of infinite size

int findPos(int arr[], int target)
{
	// first find the range
	// first start with a box of size 2
	int start = 0;
	int end = 1;

	// condition for the target to lie in the range
	while (target > arr[end]) { //going out of size....
		int temp = end+1; // this is my new start
		// double the box value
		// end = previous end + sizeofbox*2
		cout<<start<<" : "<<end<<endl;
		end = end + (end - start + 1) * 2;
		start = temp;
	}
	return binarySearch(arr, target, start, end);
}

// Driver code
int main()
{

	int arr[]
		= { 3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170,190,210,220,230,240,250 };
	int target =  170;
	// Function call
	int ans = findPos(arr, target);
	if (ans == -1)
		cout << "Element not found";
	else
		cout << "Element found at index " << ans;

	return 0;
}
