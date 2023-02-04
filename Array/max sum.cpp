maximum sum of a subsequence such that no two numbers in the sequence should be adjacent in the array.

int findMaxSum(int *arr, int n) {
	    
	    if(n==1)
	        return arr[0];
	   if(n>2)
	       arr[n-3]+=arr[n-1];
	       for(int i = n-4;i>=0;i--){
	           arr[i]+=max(arr[i+2],arr[i+3]);
	       }
	       return max(arr[0],arr[1]);
	    
	}
