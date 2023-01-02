Maximum value in each level

vector<int> maximumValue(Node* node) {
        
        vector<int>res;
        
        if(node==NULL)
            return res;
        
        solve(node,res,0);
        return res;
    }
    
    void solve(Node * node , vector<int >&res , int n){
        if(node == NULL)
            return;
        if(n>= res.size()){
            res.push_back(node->data);
        }else{
            res[n] = max(res[n], node->data);
        }
        solve(node->left , res , n+1);
        solve(node->right , res , n+1);
    }



Time complexity - O(n)
