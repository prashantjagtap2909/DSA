Detect loop (efficient solution)

bool detectLoop(Node* head)
    {
        
        unordered_set <Node*>s;
        for(Node * curr = head ;curr != NULL; curr = curr->next){
            if(s.find(curr) != s.end())
                return true;
            s.insert(curr);
        }
        return false;
    }
