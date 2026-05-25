class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> m1(26);
        vector<int> m2(26);
        for(int i=0; i<s1.size(); i++){
            m1[ s1[i] - 'a']++;
        }
        for(int i=0; i<s1.size(); i++){
            m2[s2[i] - 'a']++;
        }
        int left = 0;
        int right = s1.size() - 1;
        while(right < s2.size()){
            if(m1 == m2) return true;
            else{
                m2[s2[left] - 'a']--;
                left++;
                right++;
                if(right < s2.size())
                m2[s2[right] - 'a']++;
            }
        }
        return false;
    }
};
