//InOrder(left root right)

void InOrder(node){
    if(node==NULL){
        return;
    }
    InOrder(node->left);
    cout<<node->data;//because root at middle,we assume curr is root.
    InOrder(node->right);
}