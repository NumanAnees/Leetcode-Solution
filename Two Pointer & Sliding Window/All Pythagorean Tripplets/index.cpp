#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


vector<vector<int>> FindPythagoreanTriples(vector<int> arr) {
	int n = arr.size();
	vector<vector<int>> triples;

	// Sorting array
	sort(arr.begin(), arr.end());

	// Iterating array from start to end
	for (int i = 0; i < n; ++i) {
		if (arr[i] == 0)
			continue;

		// Calculating square of current number
		int c2 = arr[i] * arr[i];

		int j = 0;

		// Decrementing length to traverse array
		int k = n - 1;

		// Iterates till j becomes less than length of array
		while (j < k) {
			// If j becomes equal to i or the value of j is equal to 0,
			// increment j and continue
			if (j == i || arr[j] == 0) {
				j += 1;
				continue;
			}

			// If k becomes equal to i or value of k is equal to 0,
			// decrement k and continue
			if (k == i || arr[k] == 0) {
				k -= 1;
				continue;
			}

			int a2 = arr[j] * arr[j];
			int b2 = arr[k] * arr[k];

			// Check triples
			if (a2 + b2 == c2) { //i is c2 here
				triples.push_back(vector<int>{arr[j], arr[k], arr[i]});
			}

			// If a2 + b2 + (-c2) > 0, decrement the end iterator
			// to hit the target sum.
			if (a2 + b2 + (-c2) > 0) {
				k -= 1;
			}

			// If a2 + b2 + (-c2) < 0, increment the end iterator
			// to hit the target sum.
			else {
				j += 1;
			}
		}
	}
	return triples;
}

int main() {
	vector<int> l1 = {4, 16, 1, 2, 3, 5, 6, 8, 25, 10};
	cout << "1.  Original:             ";
	PrintList(l1);
	vector<vector<int>> t1 = FindPythagoreanTriples(l1);
	cout << "    Pythagorean triples:  ";
	PrintListOfLists(t1);
	cout << "\n------------------------------------------------------------------------------------------------------\n" << endl;

	vector<int> l2 = {3, 4, 5, 10, 12, 13, 14, 14, 15};
	cout << "2.  Original:             ";
	PrintList(l2);
	vector<vector<int>> t2 = FindPythagoreanTriples(l2);
	cout << "    Pythagorean triples:  ";
	PrintListOfLists(t2);
	cout << "\n------------------------------------------------------------------------------------------------------\n" << endl;
}