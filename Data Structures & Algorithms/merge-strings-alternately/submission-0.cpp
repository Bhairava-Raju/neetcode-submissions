class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        auto p1 = word1.begin();
        auto p2 = word2.begin();
        while(p1 < word1.end() && p2 < word2.end()){
            ans += *p1;
            p1++;
            ans += *p2;
            p2++;
        }
        while(p1 < word1.end()){
            ans += *p1;
            p1++;
        }
        while(p2 < word2.end()){
          ans += *p2;
            p2++;  
        }
        return ans;
    }
};