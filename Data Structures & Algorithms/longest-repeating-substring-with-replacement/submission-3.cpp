class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int max_len = 0;
        int max_freq = 0;
        vector<int> v(26);
        while(r < s.size()){
            v[s[r] - 'A']++;
            max_freq = max(max_freq, v[s[r] - 'A']);
            while((r-l+1) - max_freq > k){
                v[s[l] - 'A']--;
                max_freq = 0;
                for(int i=0; i<v.size(); i++){
                    max_freq = max(max_freq, v[i]);
                }l++;
            }
            if((r-l+1) - max_freq <= k){
                max_len = max(max_len, (r-l+1));
            }r++;
        }
        return max_len;
    }
};
