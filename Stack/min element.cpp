Get minimum element from stack after implementation of operations

struct MyStack {
 
    stack<int> ms;
    stack<int> as;
 
void push(int x) {
 
      if(ms.empty() ) {
          ms.push(x);as.push(x);return;
      }
      
      ms.push(x);
      
      if(as.top()>=ms.top())
        as.push(x);
   }
 
void pop() {
 
    if(as.top()==ms.top())
        as.pop();
    ms.pop();
    
   }

int top() {
     return ms.top();
   }
 
int getMin() {
      return as.top();
   }
};
