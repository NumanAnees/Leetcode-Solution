class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     int start = 1;
     int ans;
     auto end = *max_element(piles.begin(),piles.end()); //find max of array built-in
     while(start<=end){
         int mid = start + (end - start) / 2;
         long long int hours = 0; //exceeding int limit...
         for(auto pile : piles){
             //hours+=ceil(pile/mid); ceil is not working in leetcode :-)/...
             hours+=(pile+mid-1)/mid; //use this trick if ceil not work...
         }
         if(hours<=h){
             ans = mid;
             end=mid-1;//decrease speed,choose left....
         }
         else{
             start = mid+1; //increase speed because you are eating bananas in more than h hours....
         }
     }
    return ans;
    }
};