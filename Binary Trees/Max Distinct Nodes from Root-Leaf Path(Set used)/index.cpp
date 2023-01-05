 int traverse(Node root,  unordered_map<int,int> &mySet) {

        //base condition if root reached and if duplicate node comes.....
        if (root == null || mySet.count(root->data)) { //find(val) return iterator while count return 0/1.
           return mySet.size();
        }

        //Add the root to the set
        mySet.insert(root.data);
        int l = traverse(root->left, mySet);
        int r = traverse(root->right, mySet);
        //Backtrack and remove the element from the set
        mySet.erase(root->data);  //erase where value is root->data

        //return the max path
        return max(l, r);
    }

int MaxDist(Node *root){
    set<int> mySet;
   return traverse(root,mySet);
}