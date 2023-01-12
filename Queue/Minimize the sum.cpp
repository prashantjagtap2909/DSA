Given N elements, one can remove any two elements from the list, note their sum, and add the sum to the list. Repeat these steps while there is more than a single element in the list. The task is to minimize the sum of these chosen sums.
  
  
  int minimizeSum(int N, vector<int> arr) {
     
        priority_queue <int, vector<int>, greater<int> > tmp;
         for(int i=0;i<N;i++){
             tmp.push(arr[i]);
         }
         int res = 0;
         while(tmp.size()>1){
             
             int a = tmp.top();
                tmp.pop();
             
             int b = tmp.top();
                tmp.pop();
             
             int additn = a+b;
             
             
             res+=additn;
             
             tmp.push(additn);
             
         }
         return res;
    }


Time complexity - O(n)
