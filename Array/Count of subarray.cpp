To return the number of subarrays having value strictly greater than K.
  
  ll countSubarray(int arr[], int n, int k) {
	    
	    ll count = 0;
	    int index = -1;
	    
	    for(int i = 0;i<n;i++){
	        if(arr[i]>k){
	            int aa = n-1-i;
	            int pp = i-index-1;
	            int total  = 1+aa+pp+(aa*pp);
	            
	            count+=total;
	            index=i;
	        }
	    }
	    return count;
	}
