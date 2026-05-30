class StockSpanner {
public:
    stack<int> s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int i = 1;
        vector<int> v;
        while(!s.empty() && price >= s.top()){
            i++;
            v.push_back(s.top());
            s.pop();
        }
        for(int j=0; j<v.size(); j++){
            s.push(v[j]);
        }
        s.push(price);
        return i;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */