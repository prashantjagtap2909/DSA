Count the substring

long long countSubstring(string S){

    int cnt=0;
    
    long long int res=0;
    
    int n=S.size();
    
    vector<long long int> freq(2*n+2,0);
    
    vector<long long int> dp(2*n+2,0);
    
    freq[n]++;
    
    for(char c:S)
    {
        if(c=='0')
        cnt--;
        else
        cnt++;
        
        if(cnt-1+n>=0)
        dp[cnt+n]=dp[cnt-1+n]+freq[cnt-1+n];
        
        res+=dp[cnt+n];
        
        freq[cnt+n]++;
    }
    
    return res;
  }
