class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> ans;
        deque <int> dq; //only indexes are stored
        for(int i=0;i<nums.size();i++)
        {   
            while(!dq.empty() && dq.front()==i-k) //out of bound will be removed
                dq.pop_front(); //only window size of k is allowed
            while(!dq.empty() && nums[dq.back()]<nums[i])//remove all smaller elements in dq..
                dq.pop_back();
            dq.push_back(i);
            if(i>=k-1)ans.push_back(nums[dq.front()]); //our max value in O(1)
        }
        return ans;
    }
};