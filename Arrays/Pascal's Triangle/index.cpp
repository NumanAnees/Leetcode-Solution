class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        //outer loop....
        for(int i=1;i<=numRows;i++){
            vector<int> temp;//each vector
            //inner loop till i...
            for(int j=0;j<i;j++){
                //1 on sides....
                if(j==0 || j==i-1){
                    temp.push_back(1);
                }else{
                    vector<int> prev=ans[i-2];//previous vector...
                    int val1=prev[j-1];
                    int val2=prev[j];
                    temp.push_back(val1+val2);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};