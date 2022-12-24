class Solution {
private:
    void dfs(int i,int j,vector<vector<int>>&image,int color,int val){
        if(i<0 || i>=image.size() || j<0 || j>=image[0].size() || image[i][j] == color || image[i][j] != val) return;
        image[i][j] = color;//mark visited as color....
        dfs(i+1,j,image,color,val);
        dfs(i-1,j,image,color,val);
        dfs(i,j+1,image,color,val);
        dfs(i,j-1,image,color,val);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];
        dfs(sr,sc,image,color,val);
        return image;
    }
};