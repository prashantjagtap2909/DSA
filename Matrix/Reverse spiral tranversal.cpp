To reverse the spirally traversal of matrix

vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        
        int lft = 0,tp = 0,btm = R-1,rit = C-1;
        vector<int>res;
        int cnt = 0;
        int total = R*C;
        while(cnt<total){
            for(int i = lft;i<=rit && cnt <total ;i++){
                res.push_back(a[tp][i]);
                cnt++;
            }
            tp++;
            for(int i = tp;i<=btm && cnt<total;i++){
                res.push_back(a[i][rit]);
                cnt++;
            }
            rit--;
            for(int i = rit;i>=lft && cnt<total;i--){
                res.push_back(a[btm][i]);
                cnt++;
            }
            btm--;
            for(int i = btm;i>=tp && cnt<total;i-- ){
                res.push_back(a[i][lft]);
                cnt++;
            }lft++;
            
            
        }
        reverse(res.begin(),res.end());
         return res;
    }
