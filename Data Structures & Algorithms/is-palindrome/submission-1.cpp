class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
            }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        auto l = s.begin();
        auto r = s.end() - 1;
        while(l <= r){
            if(*l != *r) return false;
            l++;
            r--;
        }
        return true;
    }
};
