class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
       Node* successor = NULL;
       int target = x->data;
       while(root!=NULL){
           if(target>=root->data){ //move right because till now not found greater...
               root=root->right;
           }else{
               successor = root; //maybe a immediate successor...
               root=root->left; //store successor and move left finding imediate successor
               
           }
       }
       return successor;
    }
};