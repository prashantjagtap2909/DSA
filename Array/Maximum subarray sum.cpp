To find maximum subarray sum of given array

int MaxSum(int arr[],int n){
    int res = arr[0];
    int maxSub = arr[0];
    
    for(int i = 0;i<n;i++){
        MaxSub = max(MaxSub+arr[i],arr[i]);
        res = max(MaxSub,res);
     }   
    return res

time complexity -O(n)
