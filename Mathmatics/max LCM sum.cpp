To find the maximum sum of distinct numbers such that the LCM of all these numbers is equal to n.

long long int maxSumLCM(int n) 
    {
       
        long long  int cnt=0;
        for(long long int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                cnt+=i;
               long long int tmp=n/i;
                if(tmp!=i)
                  cnt+=tmp;
                
            }
        }
        return cnt;
    }

Time complexity - O(n)
