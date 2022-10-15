To find majority element in an given array

int MajorityElement(int arr[],int n){
    int ans = 0,count =1;
    for(int i = 0;i<n;i++){
        if(arr[ans]==arr[i];
            count++;
        else
            count--;
        if(count==0){
            res=i;count=1;
        }
    }
    count = 0;
    for(int i = 0;i<n;i++)
        if(arr[res]==arr[i];
            count++;
        if(count<=n/2)
            res=-1;
        return res;
}
