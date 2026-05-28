class Solution {
public:
    int evalRPN(vector<string>& t) {
        int n = t.size();
        map<string, int> m;
        stack<int> s;
        m["+"] = 1;
        m["-"] = 2;
        m["*"] = 3;
        m["/"] = 4;
        for(int i=0; i<n; i++){
            if(t[i] != "+" && t[i] != "-" && t[i] != "*" && t[i] != "/"){
                s.push(stoi(t[i]));
            }
            else if(m[t[i]] == 1){
                int a = s.top();
                s.pop();
                a += s.top();
                s.pop();
                s.push(a);
            }
            else if(m[t[i]] == 2){
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                a = b - a;
                s.push(a);
            }
            else if(m[t[i]] == 3){
                int a = s.top();
                s.pop();
                a *= s.top();
                s.pop();
                s.push(a);
            }
            else{
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                a = b / a;
                s.push(a);
            }
        }
        return s.top();
    }
};
