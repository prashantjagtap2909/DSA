Transform to sum tree



int res(Node*root){
        if(root==NULL)
            return 0;
        
        int lst = res(root->left);
        
        int rst = res(root->right);
        
        int tmp = root->data;
        
        root->data = lst+rst;
        
        return tmp+lst+rst;
    }
    void toSumTree(Node *node)
    {
        
        res(node);
    }


Time complexity - O(n)
