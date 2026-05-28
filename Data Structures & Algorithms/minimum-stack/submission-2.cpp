class MinStack {
public:
    stack<int> s1;
    stack<int> s2;
    int min = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || val <= min){
            min = val;
            s2.push(val);
        }
    }
    
    void pop() {
        int c = s1.top();
        if(c == s2.top()){
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        int a = s1.top();
        return a;
    }
    
    int getMin() {
        int b = s2.top();
        return b;
    }
};
