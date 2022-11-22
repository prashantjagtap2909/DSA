To find the second largest element in an array

int secondLargest(int arr[],int n){
    int largest = 0;
    int res = -1;
    
    for(int i = 1 ; i<n;i++)
        if(arr[i] > arr[largest])
            res = largest;
            largest = i;
            
        else if (arr[i]!= arr[largest])
            if(res ==-1 || arr[i] > arr[res])
                res = 1;
        
        return res;
        
    }

time complexity - o(n)
