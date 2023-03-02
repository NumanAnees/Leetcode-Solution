
//-----------------------------------------------My better approach with 11 test cases------------------------
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        // base condition
        if (nums.size() == 2)
        {
            if (nums[0] > nums[1])
                return 0;
        }
        int start = 0;
        int end = nums.size();
        int mid = start + (end - start) / 2;
        while (start < end - 2)
        {
            if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
            {
                break;
            }
            else if (nums[mid] > nums[mid - 1] && nums[mid] < nums[mid + 1])
            {
                start = mid;
                mid = start + (end - start) / 2;
            }
            else if (nums[mid] < nums[mid - 1] && nums[mid] > nums[mid + 1])
            {
                end = mid;
                mid = start + (end - start) / 2;
            }
        }
        return mid;
    }
};
//---------------------------------------------------------All test cases------------------------------------
class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] < nums[mid + 1])
                left = mid + 1;
            else
                right = mid; //important...
        }
        return left;
    }
};
