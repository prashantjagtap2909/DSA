DFS of graph

 vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int>visited(V,0),res;
        stack<int>st;
        visited[0]=1;
        int f = 0;
        res.push_back(0);
        st.push(0);
        
        while(st.size()){
            int x = st.top();
            f = 0;
            for(int i : adj[x]){
                if(visited[i]==0){
                    visited[i]=1;
                    st.push(i);
                    res.push_back(i);
                    f=1;
                    break;
                }
            }
            if(f==0)
                st.pop();
        }
        return res;
    }
