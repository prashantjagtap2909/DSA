To find there is loop or not

bool detectLoop(Node* head)
    {
        
        Node* temp = head ;
        
        Node* curr = head;
        while(curr != NULL && curr -> next != NULL){
            curr = curr->next->next;
            temp = temp->next;
            if(curr == temp){
                return true;
            }
        }
        return false;
    }
