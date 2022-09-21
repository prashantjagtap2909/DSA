Reverse linked list

struct Node* reverseList(struct Node *head)
    {
        
        if(head == NULL || head -> next == NULL)
            return head;
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            Node* next = curr-> next;
            
            curr -> next = prev;
            prev = curr;
            curr = next;
      
        }
        return prev;
        
    }
