class Solution {
public:
    //------------------Main func-----------------
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    //inorder traversal of Binary tree is unique....
    //we can construct single unique tree with given 2 traversals.
    //preOrder[0] is the root and where root lies in in oreder the left.
    //part is left subtree and right part is right sub tree.
    map<int,int> omap;
    //put everything in the map...
    for(int i=0;i<inorder.size();i++){
        omap[inorder[i]]=i;//store inOrder because lookup root in inOrder.
    }
    //call helper which return parent root....
    TreeNode* root = helper(preorder,0,preorder.size()-1,
                           inorder,0,inorder.size()-1, omap);
        return root;
    }
    //--------------------helper----------------
    TreeNode* helper(vector<int> &preorder,int preStart,int preEnd,
                    vector<int> &inorder,int inStart,int inEnd,
                    map<int,int> &omap){//passs by refer<===
        if(preStart>preEnd || inStart>inEnd) return NULL;//base condition
        TreeNode *root = new TreeNode(preorder[preStart]);
        int inRoot = omap[root->val];
        int numsLeft = inRoot-inStart;
        root->left = helper(preorder,preStart+1,preStart+numsLeft,
                           inorder,inStart,inRoot-1, omap);
        root->right = helper(preorder,preStart+numsLeft+1,preEnd,
                           inorder,inRoot+1,inEnd, omap);
        return root;
    }
};