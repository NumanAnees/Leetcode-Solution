class Solution {
private: 
    // dfs traversal function 
    void dfs(int node, vector<int> adjLs[], vector<int> &vis) {//pass by ref
        // mark the more as visited
        vis[node] = 1; 
        for(auto it: adjLs[node]) {
            if(!vis[it]) {
                dfs(it, adjLs, vis); 
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> adjLs[V];     
        // to change adjacency matrix to adjacency list 
        for(int i = 0;i<V;i++) {
            for(int j = 0;j<V;j++) {
                // self nodes are not considered
                if(isConnected[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j); 
                    adjLs[j].push_back(i); 
                }
            }
        }
        //create visited array initialize it with 0
        vector<int> vis(V, 0);
        int count = 0; 
        for(int i = 0;i<V;i++) {
            // if the node is not visited
            if(vis[i]==0) {
               // counter to count the number of provinces 
               count++;
               dfs(i, adjLs, vis); 
            }
        }
        return count;  
    }
};
