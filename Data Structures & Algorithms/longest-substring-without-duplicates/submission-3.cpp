class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int max_length = 0;
        int curr_length = 0;
        unordered_set<int> hash;
        while(right < s.size()){
            if(hash.find(s[right]) != hash.end()){
                while(hash.find(s[right]) != hash.end()){
                    hash.erase(s[left]);
                    curr_length--;
                    left++;
                }
            }
            else{
                curr_length++;
                max_length = max(max_length, curr_length);
                hash.insert(s[right]);
                right++;
            }
        }
        return max_length;
    }
};
