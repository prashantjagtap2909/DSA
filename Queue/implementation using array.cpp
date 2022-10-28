Implementation of queue using array and push and pop operation

void MyQueue :: push(int x)
{
        arr[rear++]=x;
}


int MyQueue :: pop()
{
     
        if(rear==0)
            return -1;
        
        if(front != rear)
            return arr[front++];
        return -1;
}
