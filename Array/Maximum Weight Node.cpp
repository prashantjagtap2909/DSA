To find Maximum Weight Node 


int maxWeightCell(int N, vector<int> Edge) {
    int res=0 , maxim = 0;
      vector<int> deg(N,0);
      for(int i=0;i<N;i++){
          int total=Edge[i];
          if(total!=-1){
              deg[total]+=i;
              if(maxim<=deg[total]){
                  maxim=deg[total];
                  res=total;
              }
          }
      }
      return res;
  }
  
  
  
  Time complexity - O(n)
