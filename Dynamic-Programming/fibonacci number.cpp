Fibonacci number using top down approach (memonisation) 

int dp[1000000];

int fib(int n)
{
    if(dp[n]==-1)
    {
        int res;
        
        if(n==0 || n==1)
            return n;
        
        else
           { res = fib(n-1)+fib(n-2);
           
            
           }
           
           dp[n]=res;
            
        
    }
    
    return dp[n];
}



Time complexity - O(n)
