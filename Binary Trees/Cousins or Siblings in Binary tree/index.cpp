
class Solution {
private:
    int xdepth, ydepth, xparent, yparent;
    void depth(TreeNode* root, int x, int y, int dep, int par_val){
        if(root==NULL) return; //return void not NULL....
        if(root->val==x){
            xdepth=dep;
            xparent=par_val;
            return;
        }
        if(root->val==y){
            ydepth=dep;
            yparent=par_val;
            return;
        }
        depth(root->left, x, y, dep+1, root->val);//parent and depth change
        depth(root->right, x, y, dep+1, root->val);//parent and depth changed
}
public:
bool isCousins(TreeNode* root, int x, int y) {
    if(root->val==x || root->val==y) return false;
    depth(root, x, y, 0, 0);
    
    if(xdepth==ydepth && xparent!=yparent) return true; //not same parents
    return false;
}
};