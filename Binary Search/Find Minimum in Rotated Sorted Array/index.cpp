class Solution {
public:
    int findMin(vector<int>& nums) {
        int end = nums.size()-1, start = 0, mid;
        if (!end) return nums[0]; // only one element

        while (start < end)
        {
            mid = start+(end-start)/2;
            // got a part that is not rotated
            if (nums[start] < nums[end]) return nums[start]; 
            // mid is larger than right -> min is in right side
            else if (nums[mid] > nums[end]) start = mid + 1;
            // mid is smaller than right-> min is in left side (including mid)
            else end = mid;//not mid-1 because mid can be our ans...
        }
        return nums[start];
    }
};