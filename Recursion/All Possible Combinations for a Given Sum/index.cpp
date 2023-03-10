#include <string>
#include <vector>
#include <iostream>

using namespace std;

void PrintAllSumRec(int target, int current_sum, int start, vector<int>& result,
					vector<vector<int>>& output) {
	// If current sum is equal to target, shallow copy the result into ouput array
	if (target == current_sum) {
		output.push_back(result);
	}

	for (int i = start; i < target; i++) {
		// Increment sum in each recursive call
		int temp_sum = current_sum + i;

		// If current sum is equal or less than target,
		// push it in result array and call function recursively
		if (temp_sum <= target) {
			result.push_back(i);
			PrintAllSumRec(target, temp_sum, i, result, output); //call for i not i++ bcz 1+1+1+1=4 can choose multiple...
			result.pop_back(); //backtracking...

		} else {
			return;
		}
	}
}

vector<vector<int>> PrintAllSum(int target) {
	vector<vector<int>> output;
	vector<int> result;
	PrintAllSumRec(target, 0, 1, result, output);
	return output;
}
