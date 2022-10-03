To check linked list is circular or not
  
  bool isCircular(Node *head)
{
   Node* curr = head;
   Node* temp = head;
   while(curr != NULL){
       curr = curr->next;
       if(temp == curr){
           return true;
       }
   }
   return false;
}
