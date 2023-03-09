class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int count = 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]==1){ //only if 1
                    //take minimal of top,left and top-left diagonal.
                    int mini = min(matrix[i-1][j],matrix[i][j-1]);
                    mini = min(mini,matrix[i-1][j-1]); //can't compare 3 at a time... 
                    matrix[i][j] = mini + 1; //+1 bcoz it is 1 initially....
                }
            }
        }
        //now sum the total count....
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                count+=matrix[i][j];
            }
        }
        return count;
    }
};