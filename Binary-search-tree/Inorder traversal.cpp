Inorder traversal of BST


vector<int> inOrder(Node *root) {
  
    vector<int>ans;
    if(root == NULL) return ans;
    if(root != NULL){
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
