class MinStack {
public:
stack<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>tmp;
        int mn=st.top();
        while(st.size()){
            mn=min(mn,st.top());
            tmp.push(st.top());
            st.pop();
        }
        while(tmp.size()){
            st.push(tmp.top());
            tmp.pop();
        }
        return mn;
    }
};
