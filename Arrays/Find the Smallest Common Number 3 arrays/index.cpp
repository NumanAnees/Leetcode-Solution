
int FindLeastCommonNumber(vector<int>& arr1, vector<int>& arr2,
											 vector<int>& arr3) {
		// Initialize starting indexes for arr1, arr2 and arr3
	int i = 0, j = 0, k = 0;
	while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
		// Finding the smallest common number
		if ((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])) return arr1[i];

		// Let's increment the iterator
		// for the smallest value.
		if (arr1[i] <= arr2[j] && arr1[i] <= arr3[k]) {
			i++;
		}

		else if (arr2[j] <= arr1[i] && arr2[j] <= arr3[k]) {
			j++;
		}

		else if (arr3[k] <= arr1[i] && arr3[k] <= arr2[j]) {
			k++;
		}
	}
	return -1;
}