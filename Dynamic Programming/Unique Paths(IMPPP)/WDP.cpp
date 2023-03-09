//----------------------------------Giving TLE bcoz no dp used---------------------------------
class Solution {
private:
    int countPaths(int i,int j,int rows,int cols){
        //base cases....
        if(i==rows-1 && j==cols-1) return 1; //if reached...
        if(i>=rows || j>=cols) return 0; //out of matrix...
        return countPaths(i+1,j,rows,cols) + countPaths(i,j+1,rows,cols); // left+right tree....
    }
public:
    int uniquePaths(int m, int n) {
       return countPaths(0,0,m,n);
    }
};

//O(2^n)||exponential TC