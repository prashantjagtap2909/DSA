Find the ceil in the BST

int findceil( Node *root , int input){
int res = -1;
    while(root != NULL){
        if(root->data == input) 
            return root->data;
        else if(root->data < input){
            root = root->right;
        }else{
            res = root->data;
            root = root->left;
        }
    }
    return res;
}
