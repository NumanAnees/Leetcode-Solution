//---------------------------------------For tabulation and memoization see dp folder----------------

#include <bits/stdc++.h> 
void SubsetSumK(int index,int target,vector<int> &arr,vector<int> &each,vector<vector<int>> &output){
    //base cases.
    if(target==0){
        output.push_back(each);
    }
    if(index==0) && arr[0]==target{//equals target or not.
        output.push_back(each);
    }
    SubsetSumK(index-1,target,arr,each,output); //not take....
    //take....
   if(target>=arr[index]){
     SubsetSumK(index-1,target-arr[index],arr,each.push_back(arr[index]),output);
    each.pop_back();//backtracking...
   }
}
vector<vector<int>> subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> output;
    vector<int> each;
    SubsetSumK(n-1,k,arr,each,output);
    return output; 
}


//O(2^n) without dp with dp O(m*n) maybe...