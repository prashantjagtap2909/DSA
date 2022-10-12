To find the no of pairs of given sum in array

int getPairsCount(int arr[], int n, int k) {
       
        unordered_map<int , int>mp;
        int count = 0;
        for(int i = 0;i<n;i++){
            
                 if(mp[k-arr[i]]>0)
                    count+=mp[k-arr[i]];
                 mp[arr[i]]++;
                
               
        }
        return count;
    }
    




Time complexity - O(n);
