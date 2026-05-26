class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for(auto it : t){
            m1[it]++;
        }

        int l = 0;
        int r = 0;

        int req = m1.size();
        int formed = 0;

        int min_len = INT_MAX;
        int start = 0;

        while(r < s.size()){

            if(m1.find(s[r]) != m1.end()){

                m2[s[r]]++;

                if(m1[s[r]] == m2[s[r]]){
                    formed++;
                }
            }

            while(formed == req){

                if(r - l + 1 < min_len){
                    min_len = r - l + 1;
                    start = l;
                }

                if(m1.find(s[l]) != m1.end()){

                    if(m1[s[l]] == m2[s[l]]){
                        formed--;
                    }

                    m2[s[l]]--;
                }

                l++;
            }

            r++;
        }

        if(min_len == INT_MAX){
            return "";
        }

        return s.substr(start, min_len);
    }
};