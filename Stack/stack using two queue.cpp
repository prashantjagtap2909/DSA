Implementation of stack using two queue

void QueueStack :: push(int x)
{

        q1.push(x);
}

int QueueStack :: pop()
{
        if(q1.empty()) return -1;
        while(q1.size()>1){
            q2.push(q1.front());
            q1.pop();
            
        }
        int res = q1.front();
        q1.pop();
        swap(q1,q2);
        return res;
}
