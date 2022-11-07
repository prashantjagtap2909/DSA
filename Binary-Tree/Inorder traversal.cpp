Inorder traversal of a tree

vector<int>res;

    vector<int> inOrder(Node* root) {
        
        if(root == NULL) 
            return res;
        
        inOrder(root->left);
        res.push_back(root->data);
        inOrder(root->right);
        return res;
            
        
    }


Time complexity - O(n)
