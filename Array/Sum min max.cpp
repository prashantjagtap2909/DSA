Find the sum of max and min element of array

int findSum(int A[], int N)
    {
    	
    	sort(A,A+N);
    	return A[0]+A[N-1];
    }
