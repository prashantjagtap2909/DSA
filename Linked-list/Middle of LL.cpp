To find the middle of linked list

int getMiddle(Node *head)
    {
       
        if (head == NULL) return 0;
        Node *slow = head,*fast = head;
        while(fast != NULL && fast ->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return (slow->data);
    }
