Count the number of subarray whose sum is zero

long long findSubarray(vector<long long> arr, int n ) {
       
        map<int , int>mp;
        long long sum =0,count=0;
        mp[0] = 1;
        for(int i =0;i<n;i++){
            sum = sum+arr[i];
            count = count+mp[sum];
            mp[sum]++;
        }
        return count;
    }
