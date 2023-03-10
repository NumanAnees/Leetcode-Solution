class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        // Comparing bottom left coordinates of rec1 with the
	    // top-right coordinates of rec2

	    bool xRec1 = rec1[0] < rec2[2];
	    bool yRec1 = rec1[1] < rec2[3];

	    // Comparing bottom left coordinates of rec2 with the
	    // top-right coordinates of rec1
        bool xRec2 = rec2[0] < rec1[2];
        bool yRec2 = rec2[1] < rec1[3];

        // Return true if all conditions true, otherwise return false.
        return (xRec1 && yRec1 && xRec2 && yRec2);
    }
};