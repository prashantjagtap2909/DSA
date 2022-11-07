To find the height of a tree


 int height(struct Node* node){
        
        if(node == NULL)
            return 0;
        return max(height(node->left)+1 , height(node->right)+1);
    }
    

 Time complexity - O(n)
