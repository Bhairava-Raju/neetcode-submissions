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
            else{
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if(t[i] == "+") s.push(b + a);
                else if(t[i] == "-") s.push(b - a);
                else if(t[i] == "*") s.push(b * a);
                else s.push(b / a);
            }
        }
        return s.top();
    }
};
