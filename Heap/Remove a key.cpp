To extract a key from a heap

int MinHeap::extractMin() 
{
    
    if(heap_size <= 0)
        return -1;
    int answer = harr[0];
    harr[0] = harr[--heap_size];
    MinHeapify(0);
    return answer;
}
