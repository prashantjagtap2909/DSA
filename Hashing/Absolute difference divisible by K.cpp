Given an array of integers of size n and an integer k, find all the pairs in the array whose absolute difference is divisible by k.

  
  long long countPairs(int n, int arr[], int k) {
       
        long long int cnt = 0;
        int sum;
        map<int , int>m;
        for(int i = 0 ; i< n ; i++){
            arr[i]%=k;
            cnt+=(long long int )m[arr[i]];
            m[arr[i]]++;
        }
        return cnt;
    }



Time complexity - O(n)
