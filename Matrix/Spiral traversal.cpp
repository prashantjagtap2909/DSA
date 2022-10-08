Spiral traversal 

vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        
        vector<int>ans;
        int top = 0,bottom = r-1;
        int right = c-1 , left = 0;
        
        while(top <= bottom && left<= right){
            for(int i = left ; i <= right ; i++)
                ans.push_back(matrix[top][i]);
            top++;
            
            for(int i = top ; i<= bottom ; i++)
                ans.push_back(matrix[i][right]);
            right--;
            
            if(top <= bottom){
                for(int i =right; i>= left;i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(left <= right){
                for(int i = bottom;i>= top ; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
