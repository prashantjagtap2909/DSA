To Replace every element with the least greater element on its right

vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int>res ;
        set<int>st;
        for(int i = n-1 ; i>=0;i--){
            auto x = st.upper_bound(arr[i]);
            if(x==st.end())
                res.push_back(-1);
            else
                res.push_back(*x);
            st.insert(arr[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
