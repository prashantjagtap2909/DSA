Implemetation of postorder traversal of tree

vector <int> preorder(Node* root)
{

 vector <int> ans;
  if(root != NULL){
      cout << (root->data) << " ";
      preorder(root->left);
      preorder(root->right);
      return ans;
  }
}


Time complexity - O(n)
