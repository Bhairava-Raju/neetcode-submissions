class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> symbols = {{'{', -3}, {'[', -2}, {'(', -1}, {'}', 3}, {']', 2}, {')', 1}};
        stack<char> st;
        bool res = true;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                st.push(s[i]);
            }
            else if((s[i] == '}' || s[i] == ')' || s[i] == ']') && !st.empty()){
                if(symbols[st.top()] + symbols[s[i]] == 0){
                    st.pop();
                }else{
                    res = false;
                    break;
                }
            }else{res = false; break;}
        }
        if(res == true && st.empty()){
            return true;
        }else{
            return false;
        }
    }
};
