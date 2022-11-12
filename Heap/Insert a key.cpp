To insert a key on Heap 

void MinHeap::insertKey(int k) 
{
   if(heap_size==capacity){
           return;
       }
    decreaseKey(heap_size++,k);
}
