#include<iostream>
using namespace std;

int binarySearch(int arr[], int size) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start < end) {

        if(arr[mid] >= arr[0]) {
            start = mid+1;
        }
        else{ 
            end = mid;
        }

        mid = start + (end-start)/2;
    }
    
    return start;
}


int main() { 

    int even[8] = {6,8,12,18,1,2,3,4};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 8);

    cout << " Index of smallest pivot is " << evenIndex << endl;
    return 0;
}