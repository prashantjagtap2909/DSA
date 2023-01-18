Find the first node of loop in linked list


int findFirstNode(Node* head)
    {
        
        unordered_map<Node*, bool> vis;
        
        Node * tmp = head;
        
        while(tmp != NULL){
            
            if(vis[tmp] == true){
                return tmp->data;
            }
            vis[tmp] = true;
            tmp = tmp->next;
        }
        
        return -1;
    }
