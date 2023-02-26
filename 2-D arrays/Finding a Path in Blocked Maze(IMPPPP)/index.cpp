// C++ program to find if there is path
// from top left to right bottom
#include <bits/stdc++.h>
using namespace std;

#define row 5
#define col 5

// to find the path from
// top left to bottom right
bool isPath(int arr[row][col])
{
	// directions
	int dir[4][2]
		= { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } }; //(x,y+1),(x,y-1),(x-1,y),(x+1,y)......

	// queue
	queue<pair<int, int> > q;

	// insert the top right corner.
	q.push(make_pair(0, 0));

	// until queue is empty
	while (q.size() > 0) {
		pair<int, int> p = q.front();
		q.pop();

		// mark as visited
		arr[p.first][p.second] = -1;

		// destination is reached.
		if (p == make_pair(row - 1, col - 1))
			return true;

		// check all four directions
		for (int i = 0; i < 4; i++) {
			// using the direction array
			int a = p.first + dir[i][0];//x
			int b = p.second + dir[i][1];//y

			// not blocked and valid
			if (arr[a][b] != -1 && a >= 0 && b >= 0
				&& a < row && b < col) {
				q.push(make_pair(a, b));
			}
		}
	}
	return false;
}

// Driver Code
int main()
{
	// Given array
	int arr[row][col] = { { 0, 0, 0, -1, 0 },
						{ -1, 0, 0, -1, -1 },
						{ 0, 0, 0, -1, 0 },
						{ -1, 0, 0, 0, 0 },
						{ 0, 0, -1, 0, 0 } };

	// path from arr[0][0] to arr[row][col]
	if (isPath(arr))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
