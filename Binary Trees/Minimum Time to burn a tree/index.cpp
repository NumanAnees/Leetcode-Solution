class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        unordered_map<Node*, Node*> parent_track; // node -> parent
        unordered_map<Node*, bool> visited;
        queue<Node*> queue;
        queue.push(root);
        /*1st BFS to get a track of parent nodes*/
        while(!queue.empty()) { 
            Node* current = queue.front(); 
            queue.pop();
            if(current->left) {
                parent_track[current->left] = current;
                queue.push(current->left);
            }
            if(current->right) {
                parent_track[current->right] = current;
                queue.push(current->right);
            }
        }
        //Go to target node where value is target....2nd BFS
        queue.push(root);
        while(!queue.empty() && queue.front()->data!=target){
             Node* current = queue.front(); 
             queue.pop();
             if(current->left) {
                queue.push(current->left);
            }
            if(current->right) {
                queue.push(current->right);
            }
        }
        Node* targetNode=queue.front();
        /*3rd BFS to go upto K level from target node and using our hashtable info*/
        //First make queue empty...
        while (!queue.empty())
        {
            queue.pop();
        }
        queue.push(targetNode);
        visited[targetNode] = true;
        int curr_level = -1; //-1 not 0 because last node increase count again....which we don't want
        while(!queue.empty()) { 
            int size = queue.size(); //running till size
            curr_level=curr_level+1;//increase after....
            for(int i=0; i<size; i++) {
                Node* current = queue.front(); queue.pop();
                if(current->left && !visited[current->left]) {
                    queue.push(current->left);
                    visited[current->left] = true;
                }
                if(current->right && !visited[current->right]) {
                    queue.push(current->right);
                    visited[current->right] = true;
                }
                if(parent_track[current] && !visited[parent_track[current]]) {
                    queue.push(parent_track[current]);
                    visited[parent_track[current]] = true;
                }
            }
        }
        return curr_level;
    }
};