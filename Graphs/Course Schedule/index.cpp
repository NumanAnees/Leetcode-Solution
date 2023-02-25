class Solution {
private:
     //======================DFS===============================
    bool isCycle(int node,vector<bool> &vis,vector<bool> &stack,vector<int> adj[]){
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
               if(isCycle(adjacentNode,vis,stack,adj) == true) 
                    return true; 
            }
        }
        
        //going back...
        stack[node] = false;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<bool> visited(n,false),currVisited(n,false);
        vector<int> adj[n];//adjancey list...
        //creating adjancey list...
        for(auto x:prerequisites){
            auto data=x;
            int a=data[0];
            int b=data[1];
            adj[a].push_back(b);
            
        }
        //Now using DFS traversal check if cycle exist or not....
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(isCycle(i,visited,currVisited,adj)){
                    return false;
                }
            }
        }
        return true;//can be completed bcoz no cycle exist.
    }
};