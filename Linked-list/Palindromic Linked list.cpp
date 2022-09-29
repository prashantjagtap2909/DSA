Check the Linked list is Palindromic or not

Node* reverse(Node* head){
        if(head==NULL) return NULL;
        Node* p=NULL, *n=NULL, *c=head;
        while(c!=NULL){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
    public:
    bool isPalindrome(Node *head){
        Node *slow=head;
        Node *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next = reverse(slow->next);
        Node* start = head;
        Node* mid = slow->next;
        while(mid!=NULL){
            if(start->data!=mid->data) return false;
            else {
                start=start->next;
                mid=mid->next;
            }
        }
        slow->next=reverse(slow->next);
        return true;
    }
