class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rowStart = 0, rowEnd = n-1;
        int columnStart = 0, columnEnd = n-1;
        int val = 0;
		
		// result matrix
        vector<vector<int>> v(n, vector<int> (n));
        while(rowStart <= rowEnd && columnStart <= columnEnd)
        {
            // left to right (row will be fixed)
            for(int i = columnStart; i <= columnEnd; ++i)
                v[rowStart][i] = ++val;
				
				// move down(col will be fixed)
            for(int i = rowStart+1; i <= rowEnd; ++i)
                v[i][columnEnd] = ++val;
				
            // move right to left
            // move  up
            if(rowStart < rowEnd && columnStart < columnEnd)
            {
                // move right to left (row will be fixed)
                for(int i = columnEnd-1; i>columnStart; --i)
                    v[rowEnd][i] = ++val;
					
					// move up (col will be fixed)
					for(int i = rowEnd; i>rowStart; --i) 
                    v[i][columnStart] = ++val;
            }
            ++rowStart;
            --rowEnd;
            ++columnStart;
            --columnEnd;
        }
        return v;
    }
};