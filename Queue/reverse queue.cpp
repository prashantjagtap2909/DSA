Reverse the given queue

queue<int> rev(queue<int> q)
{
  
    stack<int>stk;
    while(!q.empty()){
        stk.push(q.front());
        q.pop();
    }
    while(!stk.empty()){
        q.push(stk.top());
        skt.pop();
        
    }
    return q;
    
}
