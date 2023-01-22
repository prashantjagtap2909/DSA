given an array, arr of length N, and also a single integer K . Your task is to split the array arr into K non-overlapping, non-empty subarrays. For each of the subarrays, you calculate the sum of the elements in it. 


int solve(int N, int K, vector<int> &arr) {
       int sum=0;
        for(int i=0;i<N;i++){
            sum+=arr[i];
        }
        vector<int> v;
        int m=sqrt(sum)+1;
        for(int i=1;i<m;i++){
            if(sum%i==0){
                v.push_back(i);
                v.push_back(sum/i);
            }
        }
        for(int i=1;i<N;i++){
            arr[i]+=arr[i-1];
        }
        int ans=1;
        for(int x: v){
            int count=0;
            for(int i=0;i<N;i++){
                if(arr[i]%x==0){
                    count++;
                }
            }
            if(count>=K) 
                ans=max(ans,x);
        }
        return ans;
    }
