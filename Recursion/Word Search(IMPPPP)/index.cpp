class Solution {
private:
    bool search(int i,int j,int rows,int cols,vector<vector<char>> &board, string &word,int k){
     if(k==word.size()) return true;//if k pointer equals word size it means character is present...
     if(i<0||j<0||i==rows||j==cols||board[i][j]!=word[k]) return false; //return false if out of range or not match....
     char ch = board[i][j];
     board[i][j]='#';//changin the character so it is not used again....
     bool op1 = search(i+1,j,rows,cols,board,word,k+1);
     bool op2 = search(i,j+1,rows,cols,board,word,k+1);
     bool op3 = search(i-1,j,rows,cols,board,word,k+1);
     bool op4 = search(i,j-1,rows,cols,board,word,k+1);
     board[i][j]=ch; //can also be word[k], restoring old character in backtracking....
     //check if anyyy pick,choose make the ans????
     return op1 || op2 || op3 || op4;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
      int cols = board[0].size();
      int rows = board.size();
      for(int i=0;i<rows;i++){
          for(int j=0;j<cols;j++){
             if(board[i][j]==word[0]){
                if(search(i,j,rows,cols,board,word,0)) return true; //return true only when true....
              }
          }
      }
      return false;  
    }
};