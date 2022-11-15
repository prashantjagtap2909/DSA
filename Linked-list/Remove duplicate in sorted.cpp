Remove duplicate element from sorted linked list

Node *removeDuplicates(Node *head)
{

    Node *curr = head;
    while(curr != NULL && curr -> next != NULL){
        if(curr -> data == curr->next->data){
            Node * temp = curr ->next;
            curr->next = curr->next->next;
            delete(temp);
            
        }else{
            curr = curr->next;
        }
    }
    return head;
}
