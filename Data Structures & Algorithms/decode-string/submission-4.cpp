class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        stack<string> st;

        for(int i = 0; i < n; i++) {

            if(s[i] != ']') {

                // Handle multi-digit numbers
                if(isdigit(s[i])) {
                    string num = "";

                    while(i < n && isdigit(s[i])) {
                        num += s[i];
                        i++;
                    }

                    st.push(num);
                    i--;
                }

                else {
                    st.push(string(1, s[i]));
                }
            }

            else {

                string d = "";

                // Build substring inside brackets
                while(st.top() != "[") {
                    d = st.top() + d;
                    st.pop();
                }

                st.pop(); // remove '['

                int num = stoi(st.top());
                st.pop();

                string repeated = "";

                for(int j = 0; j < num; j++) {
                    repeated += d;
                }

                st.push(repeated);
            }
        }

        string ans = "";

        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};