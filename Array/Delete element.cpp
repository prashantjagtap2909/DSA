Delete a given element from the array

int delete(int arr[],int n,int x){
    int i = 0;
    for(int i = 0;i<n;i++)
        if(arr[i]==x)
            break;
    if(i==n)
        return n;
    for(int j = i;j<n-1;j++)
        arr[j]=arr[j+1];
    
    return n-1;
}
