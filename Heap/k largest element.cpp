To find the k largest element

vector<int> kLargest(int arr[], int n, int k)
    {
        
         priority_queue<int, vector<int>, greater<int>> minHeap;
        vector<int> ans;
        
        for(int i= 0; i<k; i++){
            minHeap.push(arr[i]);
        }
        
        for(int i=k; i<n; i++){
            
            if(minHeap.top()< arr[i]){
                minHeap.pop();
                minHeap.push(arr[i]);
            }
        }
        
        while(minHeap.empty()== false){
            ans.push_back(minHeap.top());
            minHeap.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }


Time complexity - O(n)
