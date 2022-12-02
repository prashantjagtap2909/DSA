A program to reverse the elements of the array

void reverse(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int temp = int [low]
        arr[low] = arr[high]
        arr[high] = temp
        low++;
        high++;
    }
}


here, n is the size of array 
have assigned low to indicate first element of the array
high is last element of array. The index in array is starts from 0 so last index is size-1.


Time complexity - O(n)
