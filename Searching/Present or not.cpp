To check element is present or not using binary search method(efficient)
  
  bool checkElement(int arr[],int target){
      int low = 0,high = arr.length()-1;
      while(low<=high){
          int mid = low+(high-low)/2;
          if(arr[mid]==target || arr[low]==target || arr[high]==target){
              return true;
          }
          if(arr[mid]<target){
              low = mid+1;
              high--;
          }
          else{
              high = mid-1;
              low++;
          }
      }
   return false;
}
