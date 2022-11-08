Level order traversal of a tree

 vector<int> levelOrder(Node* node)
    {
 
      vector<int>res;
      if(node==NULL) return res ;
      queue<Node*>q;
      q.push(node);
      while(q.empty() == false){
          Node *curr = q.front();
          q.pop();
          cout<<(curr->data)<<" ";
          if(curr->left != NULL)
                q.push(curr->left);
          if(curr->right != NULL)
               q.push(curr->right);
           
      }
    }
