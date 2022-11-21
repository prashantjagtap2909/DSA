To find the maximum occuring element from the array (using sliding window technique)

int MaximumOccuring(int l[],int r[],int n){
    int arr[1000];
    memset(arr,0,sizeof(arr));
    for(int i = 0;i<n;i++){
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maxm = arr[0],res=0;
    for(int i =1;i<1000;i++){
        arr[i] +=arr[i-1];
        if(maxm < arr[i])
            maxm = arr[i];
            res = i;
    }
    return res;
}

Time complexity - O(N)
