Node* lowestCommonAncestor(Node* root, int p, int q) {
     
    //Base cases of recursion 
    if(root == NULL or root->data == p or root->data == q)
        return root;

    //Check if LCA is present in the left subtree
    Node* leftAncestor = lowestCommonAncestor(root->left, p, q);
    //Check if LCA is present in the right subtree
    Node* rightAncestor = lowestCommonAncestor(root->right, p, q);

    //if your subtrees contain p and q, you are the LCA! 
    //return yourself to the root of the actual tree!
    if(leftAncestor and rightAncestor)
        return root;

    //return the subtree which has either p or q
    return leftAncestor? leftAncestor : rightAncestor;
    }

int LCA_distance(Node* node, int nodeValue)
{
    if(node == NULL)
        return 0;

    if(node->data == nodeValue)
        return 1;

    int leftDistance = LCA_distance(node->left, nodeValue);
    int rightDistance = LCA_distance(node->right, nodeValue);

    if(!leftDistance and !rightDistance)
        return 0;

    //Here, 1 is the height of the current 'node'
    return 1 + leftDistance + rightDistance;
}

int findDist(Node* root, int a, int b) 
{
    Node* lca = lowestCommonAncestor(root, a, b);

    int leftDistance = LCA_distance(lca, a);
    int rightDistance = LCA_distance(lca, b);

    //Need to subtract 2 because we are counting no. of 'edges'. Also, the main
    //root has been counted twice
    return leftDistance + rightDistance - 2;
}