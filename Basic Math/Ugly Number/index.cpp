class Solution {
public:
    bool isUgly(int n) {
        // if(n==1) return true;//base case but no recursion
        if(n<=0) return false;//base case
        int arr[3]={2,3,5};//range
        for(auto p: arr){
            while(n%p==0){//divide until it divides....
                n=n/p;
            }
        }
        //at last check if n==1 or not...
        return n==1;
        
    }
};