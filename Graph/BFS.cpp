BFS travesal of graph

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>v;
        queue<int>q;
        bool visited[V];
        q.push(0);
        visited[0] = true;
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            
            v.push_back(f);
            
            for(auto u :adj[f]){
                if(!visited[u]){
                    visited[u]==true;
                    q.push(u);
                }
            }
            
        }
        return v;
    }
