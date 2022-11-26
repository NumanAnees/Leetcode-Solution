//------------------------------------Solution---------------------------------------------------
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
       int n = heights.size();
      stack < int > st;
      int leftsmall[n], rightsmall[n];
        //left small each.......
      for (int i = 0; i < n; i++) {
        while (!st.empty() && heights[st.top()] >= heights[i]) {
          st.pop();
        }
        if (st.empty())
          leftsmall[i] = 0;
        else
          leftsmall[i] = st.top() + 1;
        st.push(i);
      }
      // clear the stack to be re-used
      while (!st.empty())
        st.pop();
    //right small each.......
      for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && heights[st.top()] >= heights[i])
          st.pop();

        if (st.empty())
          rightsmall[i] = n - 1;
        else
          rightsmall[i] = st.top() - 1;

        st.push(i);
      }
     //apply formula....
     //formula: (right_smaller-left_smaller+1)*arr[i].......
      int maxA = 0;
      for (int i = 0; i < n; i++) {
        maxA = max(maxA, heights[i] * (rightsmall[i] - leftsmall[i] + 1));
      }
      return maxA;
 
    }
};




//---------------------------My approach 49/98 test cases----------------------------------------
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        //find the largest....
        int maxi=INT_MIN;
        int maxIndex=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]>maxi){
                maxi=heights[i];
                maxIndex=i;
            }
        }
        //find prev and forward...
        int prev=maxIndex-1>=0?heights[maxIndex-1]:0;
        int forward=maxIndex+1<heights.size()?heights[maxIndex+1]:0;
        int prevCount=0;//start from maxindex-1 not maxI-2
        int forwardCount=0;//start from maxindex+1 not maxI+2
        //prev-count-----
        for(int i=maxIndex-1;i>=0;i--){
            if(heights[i]>=prev){
                prevCount++;
            }
            else{
                break;
            }
        }
        //forward-count---
        for(int i=maxIndex+1;i<heights.size();i++){
            if(heights[i]>=forward){
                forwardCount++;
            }
            else{
                break;
            }
        }        
        //return anss if same.......
        if(prev==forward && prev==0 && forward==0){
            return maxi;
        }
        else if(prev==forward){
            return max(maxi,prev*(prevCount+forwardCount+1));//+1 for max
        }
        //return ans if not same....
        if(prev>forward){
            return max(maxi,prev*(prevCount+1));//+1 for max
        }
        else if(forward>prev){
            return max(maxi,forward*(forwardCount+1));//+1 for max
        }
        else{
           //return if prev or forward not present...
            if(!forward){
                cout<<"a";
                return prev*2;
            }
            else{
                cout<<"b";
                return forward*2;
            }
        }
       
    }
};