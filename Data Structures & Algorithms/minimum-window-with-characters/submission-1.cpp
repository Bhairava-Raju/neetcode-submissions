class Solution {
public:
    bool valid(unordered_map<char, int>& m1, unordered_map<char, int>& m2){
        for(auto it : m1){
            if(m2[it.first] < it.second){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        string ans = "";
        string temp = "";
        int ans_len = INT_MAX;
        for(int i=0; i<t.size(); i++){
            m1[t[i]]++;
        }
        int l = 0;
        int r = 0;
        while(r < s.size()){
            if(m1.find(s[r]) != m1.end()) m2[s[r]]++;
            while(valid(m1, m2) && l <= r){
                temp = s.substr(l, r - l +1);
                if(temp.size() < ans_len){
                    ans = temp;
                    ans_len = ans.size();
                }
                if(m1.find(s[l]) != m1.end()){
                    m2[s[l]]--;
                    if(m2[s[l]] == 0) m2.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
};
