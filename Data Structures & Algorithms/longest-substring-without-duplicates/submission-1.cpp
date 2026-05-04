class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        auto r = s.begin();
        auto l = s.begin();
        int hl = 0;
        int cl = 0;
        vector<int> v(128);
        while(r != s.end()){
            v[*r]++;
            if(v[*r] > 1){
                while(v[*r] != 1){
                    v[*l]--;
                    l++;
                    cl--;
                }
                r++;
            }else{
                r++;
                cl = (r - l);
                hl = max(hl, cl);
            }
        }
        return hl;
    }
};
