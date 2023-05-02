class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negatives = 0;
        for(auto x: nums){
            if(x==0) return 0;
            if(x<0) negatives++;
        }
        return negatives%2==0 ? 1: -1;
    }
};