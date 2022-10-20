To Add two numbers represented by linked lists

 Node *reverse (Node *head ){
        Node * curr = head;
        Node *prev = NULL;
        Node *nxt = NULL;
        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        int n1 = 0;
        Node* temp1 = first;
        while(temp1)
        {
            ++n1;
            temp1 = temp1->next;
        }
        
        int n2 = 0;
        Node* temp2 = second;
        while(temp2)
        {
            ++n2;
            temp2 = temp2->next;
        }
        
        first = reverse(first);
        second = reverse(second);
        
        int sum = 0;
        int carry = 0;
        
        temp1 = first;
        temp2 = second;
        
        if(n1 > n2)
        {
            while(temp2 != NULL)
            {
                int n = temp1->data + temp2->data + carry;
                sum = n%10;
                carry = n/10;
                temp1->data = sum;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            
            while(temp1 != NULL && carry)
            {
                int a = (temp1->data + carry);
                temp1->data = a%10;
                carry = a/10;
                temp1 = temp1->next;
            }
            if(carry)
            {
                temp1 = first;
                while(temp1->next != NULL)
                {
                    temp1 = temp1->next;
                    
                }
                Node* temp = new Node(1);
                temp1->next = temp;
            }
            
            first = reverse(first);
            return first;
        }
        else if(n2 > n1)
        { 
            while(temp1 != NULL)
            {
                int n = temp1->data + temp2->data + carry;
                sum = n%10;
                carry = n/10;
                temp2->data = sum;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            while(temp2 != NULL && carry)
            {
                int a = (temp2->data + carry);
                temp2->data = a%10;
                carry = a/10;
                temp2 = temp2->next;
            }
            if(carry)
            {
                temp2 = second;
                while(temp2->next != NULL)
                {
                    temp2 = temp2->next;
                   
                }
                Node* temp = new Node(1);
                temp2->next = temp;
            }
            second = reverse(second);
            return second;
            
        }
        else
        {
            while(temp1 != NULL && temp2 != NULL)
            {
                int n = temp1->data + temp2->data + carry;
                sum = n%10;
                carry = n/10;
                temp1->data = sum;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            if(carry)
            {
                temp1 = first;
                while(temp1->next != NULL)
                {
                    temp1 = temp1->next;
                    //last node
                }
                Node* temp = new Node(1);
                temp1->next = temp;
            }
            
           first = reverse(first);
           return first;
        }
        
        
        
        return first;
        
        
    }
