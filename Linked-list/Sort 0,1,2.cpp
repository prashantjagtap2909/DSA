Sort 0,1,2 in linked list

 Node* sort012(Node *head) {
        
        Node *curr = head;
        int cnt = 0,i=0;
        while(curr->next != 0){
            cnt++;
            curr = curr->next;
        }
        int N = cnt;
        vector<int >v;
        curr = head;
        while(curr != NULL){
            v.push_back(curr->data);
            curr = curr->next;
        }
        sort(v.begin(),v.end());
        curr = head;
        while(curr != NULL){
            curr ->data = v[i];
            curr = curr->next;
            i++;
        }
        return head;
        
    }
