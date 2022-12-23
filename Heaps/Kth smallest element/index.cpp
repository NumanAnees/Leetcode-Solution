#include<bits/stdc++.h> //no need to expicitly import queue
using namespacec std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int> pq;//max heap
        //step 1:
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        //step 2:
        for(int i=k;i<=r;i++){
            if(arr[i]<pq.top()){
                pq.pop();//pop that element...
                pq.push(arr[i]); //push new to make k size heap....
                //here push already do the heapify work by moving every element to its right pos.
            }
        }
        //step 3:
        int ans = pq.top();
        return ans;
    }
};