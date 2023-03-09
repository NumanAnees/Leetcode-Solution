class Solution {
  public:
    bool isSafe1(int row, int col, vector < string > board, int n) {
      // check upper element
      int duprow = row;
      int dupcol = col;
      //check upper left diagonal
      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }
      //check on left side....
      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      //check lower left diagonal
      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }

  public:
    void solve(int col,vector<string> &board,vector <vector<string>>&ans,int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) { //check for all rows top to down....
        if (isSafe1(row, col, board, n)) { //if placing queen safe then only place...
          board[row][col] = 'Q'; 
          solve(col + 1, board, ans, n); //call for next column
          board[row][col] = '.';  //backtracking....
        }
      }
    }

  public:
    vector<vector<string>> solveNQueens(int n) {
      vector <vector<string >> ans;
      vector < string> board(n);
      string s(n, '.'); //fill empty....
      for (int i = 0; i < n; i++) {
        board[i] = s;
      }
      solve(0, board, ans, n);
      return ans;
    }
};