class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         priority_queue<int> pq;//max heap
        //step 1:
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(pq.size() < k){
                    pq.push(matrix[i][j]);
                }else{ //equal to k so perform step 2 here...
                    if(matrix[i][j] < pq.top()){ //if incoming element is less than peek
                        pq.pop(); //pop
                        pq.push(matrix[i][j]);//push new...
                    }
                }
            }
        }
        //step 2:
        
        //step 3:
        int ans = pq.top();
        return ans;
    }
};