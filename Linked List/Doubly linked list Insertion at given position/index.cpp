/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */

// Function to insert a new node at given position in doubly linked list.
void addNode(Node *head, int pos, int data)
{
    int position = pos;
    Node *temp = head;
    while (position > 0)
    {
        temp = temp->next;
        position--;
    }
    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}