void iterativePreorder(TreeNode root)
{
    if(root == NULL)
    return
    Stack<TreeNode> treeStack
    TreeNode currNode
    treeStack. push(root)
    while (treeStack.empty() == false)
    {
        currNode = treeStack.pop()
        print (currNode->data)//pre
        if (currNode->right I= NULL)//right before*
            treeStack.push(currNode->right)
        if (currNode->left I= NULL)//left after(1st)
            treeStack.push(currNode->left)
    }
}