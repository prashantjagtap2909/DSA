Pairwise swap of element

Node* pairwise_swap(struct Node* head)
{
  
    Node * curr = head;
    while(curr != NULL && curr->next != NULL){
        swap(curr->data,curr->next->data);
        curr = curr->next->next;
    }
    return head;
}
