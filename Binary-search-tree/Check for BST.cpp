To check given tree is BST or not
  
    int prev = INT_MIN;
    bool isBST(Node* root) 
    { // Your code here
        if(root==NULL) return true;
        if(isBST(root->left)==false) return false;
        if(root->data <= prev) return false;
        prev = root->data;
        
        return isBST(root->right);
    }
