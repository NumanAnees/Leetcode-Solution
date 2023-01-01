//-----------------------------My approach if 1-n and only 1 number repeat twice------------------------
//some test cases passed....
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int maxi=0;
        int sum=0;
        for(auto num:nums){
            maxi=max(maxi,num);
            sum=sum+num;
        }
        int totalSum=(maxi*(maxi+1))/2;
        return sum-totalSum;
    }
};

//---------------------------------------Solution-----------------------------------------------------
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Find the intersection point of the two runners.
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
       int tortoise2 = nums[0];
        while (tortoise2 != tortoise) {
            tortoise2 = nums[tortoise2];
            tortoise = nums[tortoise];
        }

        return tortoise;
    }
};