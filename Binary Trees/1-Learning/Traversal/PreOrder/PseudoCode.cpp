//Preorder(Root,left,right)
void preOrder(node){
    if(node==NULL){
        return;
    }
    cout<<node->data;
    preOrder(node->left);
    preOrder(node->right);   
}