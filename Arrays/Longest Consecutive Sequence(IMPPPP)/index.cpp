class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longestStreak=0;
        set<int> mySet;
        for(int num:nums){
            mySet.insert(num);
        }
        for(int num:nums){
            if(!mySet.count(num-1)){
                int currentNum = num;
                int currentStreak  = 1;
                while(mySet.count(currentNum+1)){
                    currentNum+=1;
                    currentStreak+=1;
                }
                longestStreak = max(longestStreak,currentStreak);
            }
        }
        return longestStreak;
    }
};