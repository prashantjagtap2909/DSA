To find next greater element



vector<long long> nextLargerElement(vector<long long> &arr, int n){
        
       vector<long long > res(n,0);
       
        stack<long long > st;
        for(int i=n-1;i>=0;i--) {
            while(st.size()>0 && st.top()<=arr[i]) {
                st.pop();
            }
            if(st.size()==0) {
                res[i]=-1;
            } else {
                res[i]=st.top();
            }
            st.push(arr[i]);
        }
        return res;
    }
    


Time complexity - O(n)
