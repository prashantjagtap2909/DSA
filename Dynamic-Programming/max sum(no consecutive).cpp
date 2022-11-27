To find the maximum sum of array element no two consecutive element allowed

int maxSum(int arr[], int n)
{
	if(n==0)
		return arr[0];

	if(n==0)
			return arr[0];

		int prev_prev = arr[0];
		int prev = max(arr[0], arr[1]);
		int res = prev;

		for(int i=3; i<=n; i++)
		{
			res = max(prev, prev_prev + arr[i-1]);

			prev_prev = prev;

			prev = res;
		}

		return res;
}
