To count the subset of given sum

int countSubsets(int arr[], int n, int sum)
{
	int dp[n+1][sum+1];

	for(int i=0; i<=n; i++) dp[i][0] = 1;
	for(int j=1; j<=sum; j++) dp[0][j] = 0;


	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=sum; j++)
		{
			if(j < arr[i-1])
				dp[i][j] = dp[i-1][j];
			else
				dp[i][j] = dp[i-1][j] + dp[i][j - arr[i-1]];
		}	
	}

	return dp[n][sum];
}
