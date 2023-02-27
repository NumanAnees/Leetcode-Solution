/*
cars on left side which are moving in left direction are never going to collide,
Similarly, cars on right side which are moving right side are never going to collide.

In between them every car is going to collide.
*/

class Solution {
public:
    int countCollisions(string directions) {
        int left = 0, right = directions.length() - 1;
        
        while (left < directions.length() && directions[left] == 'L') {
            left++;
        }
        
        while (right >= 0 && directions[right] == 'R') {
            right--;
        }
        
        int count = 0;
        for (int i = left; i <= right; i++) {
            if (directions[i] != 'S') {//if s then add +1 either from left or right otherwise add +2 for both left and right....
                count++;
            }
        }
		//combining these three loops - TC : O(N).
        
        return count;
    }
};