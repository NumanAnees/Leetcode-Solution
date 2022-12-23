class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;//min heap
        //step 1:
        for(int i=0;i<k;i++){
            pq.push(nums[i]);
        }
        //step 2:
        for(int i=k;i<nums.size();i++){
            if(nums[i]>pq.top()){
                pq.pop();//pop that element...
                pq.push(nums[i]); //push new to make k size heap....
                //here push already do the heapify work by moving every element to its right pos.
            }
        }
        //step 3:
        int ans = pq.top();
        return ans;
    }
};