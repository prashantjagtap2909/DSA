Insert a element in BST


Node* insert(Node* root, int key) {

    Node *temp = new Node (key);
    Node *parent = NULL , *curr = root;
    while(curr != NULL){
        parent = curr;
        if(curr->data > key)
            curr = curr->left;
        else if(curr->data < key)
            curr = curr->right;
        else return root;
    }
    if(parent == NULL)
        return temp;
    if(parent->data > key)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}
