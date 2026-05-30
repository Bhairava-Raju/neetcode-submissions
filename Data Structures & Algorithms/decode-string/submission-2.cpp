class Solution {
public:
    string decodeString(string s) {
        stack<string> strSt;
        stack<int> numSt;

        string curr = "";
        int num = 0;
        int n = s.size();

        for(int i = 0; i < n; i++) {

            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            else if(s[i] == '[') {
                strSt.push(curr);
                numSt.push(num);

                curr = "";
                num = 0;
            }

            else if(s[i] == ']') {
                string temp = curr;

                int repeat = numSt.top();
                numSt.pop();

                curr = strSt.top();
                strSt.pop();

                for(int j = 0; j < repeat; j++) {
                    curr += temp;
                }
            }

            else {
                curr += s[i];
            }
        }

        return curr;
    }
};