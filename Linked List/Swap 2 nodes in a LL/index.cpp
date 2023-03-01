void swapNodes(Node** head_ref, int x, int y)
{
    // Nothing to do if x and y are same
    if (x == y)
        return;
    Node **a = NULL, **b = NULL;
    // search for x and y in the linked list
    // and store their pointer in a and b
    while (*head_ref) {
        if ((*head_ref)->data == x)
            a = head_ref;
        else if ((*head_ref)->data == y)
            b = head_ref;
        head_ref = &((*head_ref)->next);
    }
    // if we have found both a and b
    // in the linked list swap current
    // pointer and next pointer of these
    if (a && b) {
        swap(*a, *b);
        swap(((*a)->next), ((*b)->next));
    }
}