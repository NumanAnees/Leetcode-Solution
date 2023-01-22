class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int start=0;
        int end=1;
        if(intervals.size()==0) return ans;
        sort(intervals.begin(),intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto x: intervals){ //why not from 1 to n??????????????????
            if(x[start]<=tempInterval[end]){ //true,x=[1,3] and temp=[1,3].case when 1st is compared with first....
                tempInterval[end] = max(x[end],tempInterval[end]); //change end...
            }else{
                ans.push_back(tempInterval); //in this ques we only check the 1 clash as the array is sorted but in insert interval ques we dont know the position of newInterval....
                tempInterval=x;
            }
        }
        ans.push_back(tempInterval);
        return ans;
    }
};