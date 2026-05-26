class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        for(auto it : t){
            mp[it]++;
        }
        int ct = 0, st_in = -1, min_len = INT_MAX;
        int l = 0, r = 0;
        int n = s.size(), m = t.size();
        while(r < n){
            if(mp[s[r]] > 0){
                ct++;
            }
            mp[s[r]]--;
            while(ct == m){
                if(r-l+1 < min_len){
                    min_len = r-l+1;
                    st_in = l;
                }
                mp[s[l]]++;
                if(mp[s[l]] > 0) ct--;
                l++;
            }
            r++;
        }
        if(st_in == -1) return "";
        else return s.substr(st_in, min_len);
    }
};