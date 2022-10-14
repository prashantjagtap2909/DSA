Maximize the sum of selected numbers from a sorted array to make it empty

 int maximizeSum(int a[], int n) 
    {
        
        map<int ,int>mp;
        for(int i = 0 ; i <n;i++){
            mp[a[i]]++;
        }
        sort(a,a+n);
        int res = 0;
        for(int i  = n;i>=0;i--){
            int ab = a[i];
            int bc = a[i]-1;
            if(mp[ab]>=1){
                res +=ab;
                mp[ab]--;
                
                if(mp[bc]>=1){
                    mp[bc]--;
                }
            }
        }
        return res;
    }
