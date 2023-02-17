class Solution {
  public:
    //======================DFS===============================
    bool dfs(int node,vector<bool> &vis,vector<bool> &stack,vector<int> adj[]){
        //when arrive at a node...
        vis[node] = true;
        stack[node] = true;
        //do some work, return true if back edge is found...
        for(auto adjacentNode : adj[node]){
            if(stack[adjacentNode]==true){
                return true;
            }
            else if(vis[adjacentNode]==false){
            //call dfs...
               if(dfs(adjacentNode,vis,stack,adj) == true) 
                    return true; 
            }
        }
        
        //going back...
        stack[node] = false;
        return false;
    }
    
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V,false);
        vector<bool> stack(V,false);
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,vis,stack,adj)){
                    return true;
                }
            }
        }
        return false;
    }
};