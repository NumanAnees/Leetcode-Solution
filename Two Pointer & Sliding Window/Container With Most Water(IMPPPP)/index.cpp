class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxi=INT_MIN;
        while(left<right){
            int mini = min(height[left],height[right]);
            maxi=max(maxi,(right-left)*mini); //works only when subtract beforeeee  //small height with the length...
            //now move the smallest next....
            height[left]<height[right]?left++:right--; //which one is smaller..
        }
        return maxi;
    }
};