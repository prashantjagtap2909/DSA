Arrange data alternatively i.e max element->min element->second max->second min and so on

void rearrange(long long *arr, int n) 
    { 
    	vector<int > v;
    	int start = 0 , end = n-1;
    	while(start<=end){
    	    v.push_back(arr[end--]);
    	    v.push_back(arr[start++]);
    	    
    	}
    	for(int start= 0 ; start<n;start++){
    	    arr[start] = v[start];
    	    
    	}
  
  Time complexity - O(n)
