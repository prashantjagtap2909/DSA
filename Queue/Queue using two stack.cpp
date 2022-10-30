To implement queue using two stack

void StackQueue :: push(int x)
{
    
    s1.push(x);
}


int StackQueue :: pop()
{
        
        if(s1.empty()) return -1;
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int res = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return res;
}
