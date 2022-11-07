Inorder traversal of a tree

vector<int> inOrder(Node* root) {
       
        vector <int> ans;
        if(root != NULL){
      
          inOrder(root->left);
          cout << (root->data) << " ";
          inOrder(root->right);
          return ans;
                
         }   
    }
Time complexity - O(n)
