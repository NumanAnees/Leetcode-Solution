// CPP program to check if a query string
// is present is given set.
#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 256;

bool isPresent(string s, string q)
{
	// Count occurrences of all characters
	// in s.
	int freq[MAX_CHAR] = { 0 };
	for (int i = 0; i < s.length(); i++)
		freq[s[i]]++;

	// Check if number of occurrences of
	// every character in q is less than
	// or equal to that in s.
	for (int i = 0; i < q.length(); i++) {
		freq[q[i]]--;
		if (freq[q[i]] < 0)
		return false;
	}

	return true;
}

// driver program
int main()
{
	string s = "abctd";
	string q = "cat";

	if (isPresent(s, q))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
