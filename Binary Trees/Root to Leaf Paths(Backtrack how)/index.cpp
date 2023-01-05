void helper(vector<vector<int>>&ans,Node* root,vector<int> &res){
     if(root==NULL)return;
     res.push_back(root->data);
     if(root->left==NULL && root->right==NULL){
         ans.push_back(res); //no return here because we want to pop_back.
     }
     helper(ans,root->left,res);
     
     helper(ans,root->right,res);
     res.pop_back(); //imp to pop when complete for left and right....
      
 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> ans;
    if(root==NULL)return ans;
    vector<int>res;
    helper(ans,root,res);
    return ans;
    
}
//--------------------------------------Backtracking-------------------------------
void helper(vector<vector<int>>&ans,Node* root,vector<int> &res){
     if(root==NULL)return;
     res.push_back(root->data);
     if(root->left==NULL && root->right==NULL){
         ans.push_back(res);
          res.pop_back(); // pop childs... :)
          return;
     }
     helper(ans,root->left,res);
     
     helper(ans,root->right,res);
     res.pop_back(); //pop root....
     
 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>> ans;
    if(root==NULL)return ans;
    vector<int>res;
    helper(ans,root,res);
    return ans;
    
}