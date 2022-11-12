To delete a key from heap tree

void MinHeap::deleteKey(int i)
{
    
    if(heap_size<=0 || heap_size<=i) return;
   decreaseKey(i,INT_MIN);
   extractMin();
}
