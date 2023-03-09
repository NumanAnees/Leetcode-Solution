#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool CheckWinPositions(vector<string> board, char player) {
	// Check if the given player has a win position.
	// Return true if there is a win position. Else return false.
	// Check the rows
	for (int i = 0; i < board.size(); i++) {
		if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
			return true;
	}

	// Check the columns
	for (int i = 0; i < board.size(); i++) {
		if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
			return true;
	}

	// Check the diagonals
	if ((board[0][0] == player && board[1][1] == player &&
			 board[2][2] == player) ||
			(board[0][2] == player && board[1][1] == player && board[2][0] == player))
		return true;

	return false;
}

bool ValidTicTacToe(vector<string> board) {
	// Intializing x_count and o_count
	int x_count = 0;
	int o_count = 0;

	// Iterating over the board (e.g ["XOX","O O","XOX"]) to count the
	// number of "X" and "O" on the board.
	for (int i = 0; i < board.size(); i++) {
		// Iterating over each row: e.g "XOX"
		for (int j = 0; j < board.size(); j++) {
			// Updating count of "X"
			if (board[i][j] == 'X') x_count += 1;

			// Updating count of "O"
			else if (board[i][j] == 'O') o_count += 1;
		}
	}

	// Since X starts first, x_count > o_count. Players have taken their turns
	// so, x_count - o_count must not be greater than 1.
	if (o_count > x_count || x_count - o_count > 1) return false;

	// Checking if player O is winning.
	if (CheckWinPositions(board, 'O')) {
		// Return false if player X is also in winning position
		if (CheckWinPositions(board, 'X')) return false;

		// Return true if o_count is equal to x_count, else return false.
		return o_count == x_count;
	}

	// Checking if player X is winning and x_count != o_count + 1
	// Since player X plays the first move if player X wins, the player Xs
	// count would be 1 more than player O
	if (CheckWinPositions(board, 'X') && x_count != o_count + 1) return false;
	return true;
}

void PrintTicTacToe(vector<string> values) {
	cout << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t     |     |" << endl;
		cout << "\t  " << values[i][0] << "  |  " << values[i][1] << "  |  "
			 << values[i][2] << endl;
	if (i < 2)
		cout << "\t_____|_____|_____" << endl;
	else
		cout << "\t     |     |";
	}
	cout << endl;
}

int main() {
	vector<vector<string>> inputBoard = {{"O  ", "   ", "   "},
										 {"XOX", " X ", "   "},
										 {"XXX", "   ", "OOO"},
										 {"XOX", "O O", "XOX"}};
	int index = 0;
	for (vector<string> board : inputBoard) {
		cout << "Board #" << (++index);
		cout << ": Tic Tac Toe board with values [\"" << board[0] << "\", \""
			 << board[1] << "\", \"" << board[2] << "\"]\n";
		PrintTicTacToe(board);
		if (ValidTicTacToe(board)){
			cout << "\nResult: A valid tic tac toe board." << endl;
		} else {
			cout << "\nResult: Not a valid tic tac toe board" << endl;
		}
		cout << "------------------------------------------------------------------------------------\n";
	}
}