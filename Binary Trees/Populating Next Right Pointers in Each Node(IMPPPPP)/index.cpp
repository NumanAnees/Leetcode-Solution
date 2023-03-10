class Solution {
public:
    Node* connect(Node* root) {
        Node* start = root;
        while(start!=NULL and start->left!=NULL){
            Node* node=start;
            while(true){
             node->left->next=node->right;//for left
             if(node->next==NULL) break; //last node remain null....//check if next exists or not...
             node->right->next=node->next->left;//for right
             node=node->next; //move to next....
            }
            start=start->left;//why left... go to left of initial and do work again for children...
        }
        return root;
    }
};

//---------------------easy------------------------
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return root;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* x=q.front();
                q.pop();
                if(i!=n-1)x->next=q.front(); //i==n-1 is by default null
                if(x->left)q.push(x->left);
                if(x->right)q.push(x->right);
            }
        }
        return root;
    }
};