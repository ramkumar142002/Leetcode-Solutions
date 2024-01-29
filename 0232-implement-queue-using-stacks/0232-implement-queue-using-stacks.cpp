class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> temp;
        temp.push(x);
        vector<int> t;
        while(!st.empty()){
            t.push_back(st.top());
            st.pop();
        }
        reverse(t.begin(),t.end());
        for(int i = 0;i<t.size();i++){
            temp.push(t[i]);
        }
        st = temp;
    }
    
    int pop() {
        int ret = st.top();
        st.pop();
        return ret;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        if(st.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */