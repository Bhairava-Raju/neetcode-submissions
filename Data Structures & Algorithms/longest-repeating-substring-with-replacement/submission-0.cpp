class Solution {
public:
    int characterReplacement(string s, int k) {
        auto r = s.begin();
        auto l = s.begin();
        int mf = 0, ws = 0, ans = 0;
        vector<int> v(26, 0);
        while(r != s.end()){
            int i = *r - 'A';
            v[i]++;
            ws = r - l + 1;
            mf = max(mf, v[i]);
            if (ws - mf > k) {
                v[*l - 'A']--;
                l++;
                ws = r - l + 1;
            }
            ans = max(ans, ws);
            r++;
        }
        return ans;
    }
};
