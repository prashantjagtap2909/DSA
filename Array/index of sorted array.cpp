Given an array with N distinct elements, convert the given array to a reduced form where all elements are in range from 0 to N-1.

int convert(int arr[], int n) {
	 
    	  vector<pair<int,int>>vctr(n);
         for(int i=0;i<n;++i){
             vctr[i] = {arr[i],i};
         }
         sort(vctr.begin(),vctr.end());
         for(int i = 0;i<n;++i){
             arr[vctr[i].second]=i;
         }
    	  return vctr;  
	}
