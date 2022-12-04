//---------------------Solution comparing childs with parents--------------------------
class Solution {
public:
    bool helper(TreeNode* root,long low ,long high){
        // Empty trees are valid BSTs.
        if(root == NULL){
            return true;
        }
        
        // Condition of Binary Search Tree 
        // left side node values of the root should be less value than the root and right side should be greater
        // If that is true check recursivley for the root child's
        
        if((root->val < high) && (root->val > low)){
          return (helper(root->left, low, root->val) && helper(root->right, root->val, high));

        }else{
            //if this root node violates the min/max constraint
            return false;
        }
        
    }
    
    bool isValidBST(TreeNode* root) {
        bool ans = helper(root, LONG_MIN, LONG_MAX);
        return ans;
    }
};

//My Approach just missing the extra check of parent...(everything on left and right includes subtrees should be less and greater respectively)
//i'm comparing parent with childs....
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        //if reached to root without any false means true...
        //if both left and right are Null then also return true...
        if(root==NULL || (root->left == NULL && root->right==NULL)){
            return true;
        }
        //if both present test...
         if(root->left &&root->left->val<root->val && root->right&& root->right->val>root->val){
          return true;  
        }
        //if left is Null and right present test...
        else if(root->left==NULL && root->right->val>root->val){
             return true;
         }
        //if left is Null and right present test...
        else if(root->right==NULL && root->left->val<root->val){
             return true;
         }
        //if all conditions not matched means it is not BST so return false.
        else{
            return false;
        }
      //if for both subtrees it returns true then only return true...
      return isValidBST(root->left) && isValidBST(root->right);
        
    }
};