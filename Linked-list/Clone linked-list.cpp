Copy/clone linked list with random pointer

Node *copyList(Node *head)
    {
       
        map<Node* , Node*>m;
        
        Node * ptr= head;
        while(ptr != NULL){
            m[ptr] = new Node(ptr->data);
            ptr = ptr->next;
        }
        ptr = head;
        while(ptr != NULL){
            m[ptr]->next = m[ptr->next];
            m[ptr]->arb = m[ptr->arb];
            ptr = ptr->next;
        }
        return m[head];
    }
