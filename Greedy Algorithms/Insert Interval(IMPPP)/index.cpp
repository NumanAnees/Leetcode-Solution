class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        //base case
        if(intervals.size()==0){
            ans.push_back(newInterval);
            return ans;
        }
        int start=0; 
        int end=1;
        bool mergeNew = false; //if overlap make it true and whenever non overlap occur push newInterval before
        int overLapCount=0; //if no overlap then simply add the newInterval....
        for(auto x:intervals){
            if(newInterval[end]>x[start] && newInterval[start]<x[end] || newInterval[end]==x[start] || newInterval[start]==x[end]){
                int left=min(newInterval[start],x[start]); //find minimum start time
                int right=max(newInterval[end],x[end]);   //find max end time
                newInterval={left,right}; //change the original newInterval
                mergeNew=true;
                overLapCount++;
            }
            else{
                if(mergeNew) ans.push_back(newInterval);
                mergeNew=false;
                ans.push_back(x);
            }
        }
        if(mergeNew || overLapCount==0) ans.push_back(newInterval);
        sort(ans.begin(),ans.end()); //condition to return sorted result....
        return ans;
    }
};