//PostOrder(left right root)

void PostOrder(node){
    if(node==NULL){
        return;
    }
    PostOrder(node->left);
    PostOrder(node->right);
    cout<<node->data;//because root at middle,we assume curr is root.
}