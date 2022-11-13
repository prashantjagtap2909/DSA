To print adjacency list

vector<vector<int>> printGraph(int V, vector<int> adj[]) {
  
        vector<vector<int>>res(V,{0});
        for(int i = 0;i<V;i++){
            res[i][0] = i;
            for(int V:adj[i]){
                res[i].push_back(V);
            }
        }
        return res;
        
    }
    


Time complexity - O(n)
