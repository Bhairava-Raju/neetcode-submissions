class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
            }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0; i<s.length()/2; i++){
            if(s[i] != s[s.length()-1-i]){
                return false;
            }
        }
        return true;
    }
};
