int floor(Node* root, int input) {
    int floor = -1;
    while(root){
        if(root->data==input){
            floor=root->data;
            return floor;
        }
        if(input>root->data){
            floor = root->data;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return floor;
}