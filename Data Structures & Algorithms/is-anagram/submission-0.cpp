class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> a1(26);
        vector<int> a2(26);
        int a;
        for(int i = 0; i < s.length(); i++){
            a = s[i] - 'a';
            a1[a]++;
        }
        for(int i = 0; i < t.length(); i++){
            a = t[i] - 'a';
            a2[a]++;
        }
        for(int i=0; i<a1.size(); i++){
            if(a1[i] != a2[i])
            return false;
        }
        return true;
    }
};
