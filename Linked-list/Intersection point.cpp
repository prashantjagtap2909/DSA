Inetersection point of two linked lists

int intersectPoint(Node* head1, Node* head2)
{
    
    Node *curr1 = head1;
    Node *curr2 = head2;
    
    while(curr1 != curr2){
        curr1 = curr1==NULL ? head2:curr1->next;
        curr2 = curr2==NULL ? head1:curr2->next;
    }
    return curr1->data;
}
