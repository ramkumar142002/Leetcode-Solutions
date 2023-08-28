class MyStack {
public:
stack<int> S;
    MyStack() {
        
    }
    
    void push(int x) {
        S.push(x);
        // return MyStack.top();
    }
    
    int pop() {
        int x=S.top();
        S.pop();
        return x;
    }
    
    int top() {
        return S.top();
    }
    
    bool empty() {
        return (S.empty());
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