// C++ function to calculate the number of
// ways to achieve sum x in n no of throws
#include <bits/stdc++.h>
using namespace std;

// Function to calculate recursively the
// number of ways to get sum in given
// throws and [1..m] values
int NoofWays(int face, int throws, int sum,vector<vector<int>> &dp)
{
	// Base condition 1
	if (sum == 0 && throws == 0)
		return 1;

	// Base condition 2
	if (sum < 0 || throws == 0) //handle sum>0 and throws=0
		return 0;

	// If value already calculated donot
	// move into re-computation
	if (dp[throws][sum] != -1)
		return dp[throws][sum];

	int ans = 0;
	for (int i = 1; i <= face; i++) {

		// Recursively moving for sum-i in
		// throws-1 no of throws left
		ans += NoofWays(face, throws - 1, sum - i,dp);
	}

	// Inserting present values in dp
	return dp[throws][sum] = ans;
}

// Driver function
int main()
{
	int faces = 6, throws = 2, sum = 4;
    vector<vector<int>> dp(throws+1,vector<int>(sum+1,-1)); //2d dp
	cout << NoofWays(faces, throws, sum,dp) << endl;
	return 0;
}
