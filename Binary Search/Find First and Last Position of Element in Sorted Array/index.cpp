class Solution {
private:
    // Finding the low index of the target element
int FindLowIndex(vector<int>& nums, int target) {
	int low = 0;
	int high = nums.size() - 1;
	int mid = high / 2;

	while (low <= high) {
		int mid_elem = nums[mid];

		// Target value is less than the middle value
		if (mid_elem < target) {
			low = mid + 1;
		}

		// Target value is greater than or equal to the middle value
		else {
			high = mid - 1;
		}

		// Updating the mid value
		mid = low + (high - low) / 2;
	}

	if (low < nums.size() && nums[low] == target) {
		return low;
	}

	return -1;
}

// Finding the high index of the target element
int FindHighIndex(vector<int>& nums, int target) {
	int low = 0;
	int high = nums.size() - 1;
	int mid = high / 2;

	while (low <= high) {
		int mid_elem = nums[mid];

		// Target value is less than or equal to the middle value
		if (mid_elem <= target) {
			low = mid + 1;
		}

		// Target value is greater than the middle value
		else {
			high = mid - 1;
		}

		// Updating the mid value
		mid = low + (high - low) / 2;
	}

	if (high == -1) return high;

	if (high < nums.size() && nums[high] == target) {
		return high;
	}

	return -1;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=-1;
        int high=-1;
        low = FindLowIndex(nums,target);
        high = FindHighIndex(nums,target);
        return {low,high};
    }
};