class MyStack {
public:
    //1 queue is used rest commented lines is for 2 queue implementation
    queue<int>q1;
    // queue<int>q2;
    int peek=-1;
        
    int topElement;
    MyStack() {
        
    }
    
    void push(int x) {
        peek=x;
        q1.push(x);
        // q2.push(x);
        // while(!q1.empty())
        // {
        //     q2.push(q1.front());
        //     q1.pop();
        // }
        // swap(q1,q2);
    }
    
    int pop() {
        int n= q1.size()-1;
        while(n)
        {
            peek=q1.front();
            q1.push(peek);
            q1.pop();
            n--;
        }
        int res=q1.front();
        q1.pop();
        return res;
        // int x=q1.front();
        // q1.pop();
        // return x;
    }
    
    int top() {
        return peek ;
        // return q1.front();
    }
    
    bool empty() {
        return q1.size()==0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */