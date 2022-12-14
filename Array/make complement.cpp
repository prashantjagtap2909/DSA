Make complement 


vector<int> findRange(string str, int n) {
        
        int sm = 0;
        int maxisum = INT_MIN;
        int lft = -1 , rit = -1;
        int start = 0;
        for(int i = 0;i<n;i++){
            char ch = str[i];
            sm += (ch == '0' ? 1:-1);
            if(sm > maxisum ){
                maxisum = sm;
                lft = start , rit = i;
            }
            if(sm<0){
                sm = 0;
                start = i+1;
            }
        }
        if(maxisum == -1 ) return {-1};
        
        return {lft+1 , rit+1};
    }
