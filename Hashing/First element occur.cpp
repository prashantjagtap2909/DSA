To find first element that occurs K times

int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int ,int > mp;
        
        for(int i = 0;i<n;i++){
            mp[a[i]]++;
            if(mp[a[i]] == k){
                return a[i];
            }
        }
        return -1;
    }
