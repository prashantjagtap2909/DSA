Left rotate the array by one

void LeftRotate(int arr[],int n){
    int temp = arr[0];
    for(int i = 1;i<n;i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}

Time complexity - O(n)
