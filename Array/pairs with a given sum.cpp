Find all pairs with a given sum

 vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
 
        unordered_set<int>st;
        vector<pair<int,int>>res;
        for(int i =0;i<N;i++){
            st.insert(A[i]);
        }
        for(int i = 0;i<M;i++){
            if(st.find(X-B[i]) != st.end()){
                res.push_back({X-B[i],B[i]});
            }
            sort(res.begin(),res.end());
            
        }
        return res;
    }

Time complexity - O(n)
