class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans; 
        if(root == NULL) return ans; 
        map<int,int> mpp; //Sorted map instead of unordered_map
        queue<pair<Node*, int>> q; 
        q.push({root, 0}); 
        while(!q.empty()) {
            // a simple way to declare a variable that has a complicated type
            auto it = q.front(); //get topmost node...
            q.pop(); 
            Node* node = it.first; //get node
            int line = it.second;  //get line number
            if(mpp.find(line) == mpp.end()) mpp[line] = node->data; //ensure line does not exist in map and add 
            //move left and decrement the vertical line number
            if(node->left != NULL) {
                q.push({node->left, line-1}); 
            }
            //move right and decrement the vertical line number
            if(node->right != NULL) {
                q.push({node->right, line + 1}); 
            }
            
        }
        
        for(auto it : mpp) {
            ans.push_back(it.second); 
        }
        return ans; 
    }

};