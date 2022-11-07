Implementation of postorder traversal of tree

vector <int> postOrder(Node* root)
{

  vector <int> ans;
        if(root != NULL){
      
          postOrder(root->left);
          postOrder(root->right);
          cout << (root->data) << " ";
         
          return ans;
                
         }   
}


Time complexity - O(n)
