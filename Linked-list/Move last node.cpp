Move last element to the front of Linked list

 ListNode *moveToFront(ListNode *head){
        if(head==NULL){
            return NULL;
        }
        if(head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr->next != NULL){
            prev = curr;
            curr = curr ->next;
        }
        curr ->next = head;
        prev->next = NULL;
        return curr;
    }
