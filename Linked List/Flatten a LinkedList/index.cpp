Node* mergeTwoSortedLists(Node *a,Node *b){
    Node *temp=new Node(0);
    Node *res=temp;
    
    while(a!=NULL and b!= NULL){
        if(a->data<b->data){
            temp->bottom=a;//store new temp.
            temp=temp->bottom;//move temp.
            a=a->bottom;//move a as well.
        }else{
            temp->bottom=b;//store new temp.
            temp=temp->bottom;//move temp.
            b=b->bottom;//move b as well.
        }
    }
    //loop fails one become empty...
    if(a) temp->bottom = a;
    else temp->bottom=b;
    return res->bottom;//res is 0 for(initialization)....
}
Node *flatten(Node *root)
{
    //===========================Recursive================================
//     //base case....
//   if(root==NULL || root->next==NULL){
//       return root;
//   }
//   //go from L1 to Ln...
//   root->next=flatten(root->next);
//   //now merge...
//   root = mergeTwoSortedLists(root,root->next);
//   //root return....
//   return root;
    //============================iterative===============================
    while(root && root->next)
    {
       Node* temp = root->next->next;
       root = mergeTwoSortedLists(root, root->next);
       root->next = temp;//no here why?? becoz root changeddddddddddddd.
    }
    return root;
}