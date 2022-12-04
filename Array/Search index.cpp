To search the index of element in unsorted array

int search(int array[],int sizeOfArray, int element){
    for(int i = 0 ; i<sizeOfArray ; i++){
        if(array[i] == x)
            return i;
    }
}
    
Time complexity = O(n)
