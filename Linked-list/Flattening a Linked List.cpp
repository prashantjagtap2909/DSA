Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
(i) a next pointer to the next node,
(ii) a bottom pointer to a linked list where this node is head.
Each of the sub-linked-list is in sorted order.
Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order.
  
  Node *merge2LL(Node *a, Node *b){
        Node *temp= new Node(-1);
        Node *ans=temp;
        
        while(a!=NULL && b!=NULL){
            if(a->data > b->data){
                temp->bottom = b;
                temp = temp->bottom;
                b = b->bottom;
            }
            else{
                temp->bottom = a;
                temp= temp->bottom;
                a = a->bottom;
            }
        }
        while(a!=NULL){
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
        while(b!=NULL){
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
        return ans->bottom;
    }
    
    Node *flatten(Node *root)
    {
       
        if(root == NULL || root->next == NULL){
            return root;
        }
        root->next = flatten(root->next);
        root = merge2LL(root, root->next);
        return root;
    }
