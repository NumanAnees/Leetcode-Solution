class Solution
{
private:
void inorderMax(Node *root,int &maxi){
    if(root==NULL){
        return;
    }
    inorderMax(root->left,maxi);
    maxi=max(root->data,maxi);
    inorderMax(root->right,maxi);
}
void inorderMin(Node *root,int &mini){
    if(root==NULL){
        return;
    }
    inorderMin(root->left,mini);
    mini=min(root->data,mini);
    inorderMin(root->right,mini);
}
public:
    int findMax(Node *root)
    {
        int maxi=INT_MIN;
        inorderMax(root,maxi);
        return maxi;
    }
    int findMin(Node *root)
    {
         int mini=INT_MAX;
        inorderMin(root,mini);
        return mini;
    }
};