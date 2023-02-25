class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_map<int,int> umap;
     //store the count...
     Node* curr = head;
     Node* prev = NULL;
     while(curr){
         if(umap.find(curr->data)!=umap.end()){
             //if found then skip.... 
             prev->next=curr->next;
             curr=curr->next;
         }
         else{
             umap[curr->data]++;
             prev = curr;
             curr = curr->next;
         }
     }
     return head;//imp
    }
};