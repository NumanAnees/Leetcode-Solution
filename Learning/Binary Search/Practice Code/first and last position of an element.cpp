#include<iostream>
using namespace std;
int leftIndex(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size();
        int mid = start + (end-start)/2;
        int result=-1;
        while(start <= end) {

        if(nums[mid] == target) {
            result= mid;
            end = mid-1;
        }
        if(target > nums[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return result;    
    }
    //Right Index
    int rightIndex(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size();
        int mid = start + (end-start)/2;
        int result=-1;
        while(start <= end) {

        if(nums[mid] == target) {
            result= mid;
            start = mid+1;
        }
        if(target > nums[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return result;    
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> Answer;
        int LeftMost = leftIndex(nums,target);
        Answer.push_back(LeftMost);
        int RightMost = rightIndex(nums,target);
        Answer.push_back(RightMost);
        return Answer;

    }

int main() { 

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;


    return 0;
}

