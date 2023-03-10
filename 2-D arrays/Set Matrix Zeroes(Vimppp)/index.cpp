class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        //checking if 0 is present in the 0th column or not
        if (matrix[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++) {
        if (matrix[i][j] == 0) {
            matrix[i][0] = 0;
            matrix[0][j] = 0;
            }
        }
    }
    //traversing in the reverse direction and
    //checking if the row or col has 0 or not
    //and setting values of matrix accordingly.
    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
        if (col0 == 0) {
            matrix[i][0] = 0;
        }

        }
    }
};

//----------------------------O(n+m) space solution-----------------------------------------
//---------------------------O(m*n) is time-------------------------------------------------

void MakeZeros(vector<vector<int>>& matrix) {
	// Degenerate case
	if (matrix.empty()) {
		return;
	}

	// Creating the sets for zero rows and columns
	unordered_set<size_t> zero_rows;
	unordered_set<size_t> zero_cols;

	// The size_t integer type can store the maximum size of a 
	// theoretically possible object of any type (including array)
	// It's a good programming practice in C++ to use this type 
	// for array indexing and loop counting
	size_t rows, cols;
	
	// Setting the number of rows and columns
	rows = matrix.size();
	cols = matrix[0].size();

	// Nested for loop to iterate over each element
	for (size_t i = 0; i < rows; i++) {
		for (size_t j = 0; j < cols; j++) {
			// If a zero is found, insert the indices to the sets
			if (matrix[i][j] == 0) {
				// A set can only have unqiue values, so we can
				// insert the indices wihtout worrying about duplicates
				zero_rows.insert(i);
				zero_cols.insert(j);
			}
		}
	}

	// Setting the rows to zero with the indices from zero_rows
	for (size_t r : zero_rows) {
		for (size_t c = 0; c < cols; c++) {
			matrix[r][c] = 0;
		}
	}

	// Setting the columns to zero with the indices from zero_cols
	for (size_t c : zero_cols) {
		for (size_t r = 0; r < rows; r++) {
			matrix[r][c] = 0;
		}
	}
}