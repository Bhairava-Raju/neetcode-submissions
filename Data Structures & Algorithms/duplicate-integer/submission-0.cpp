class Solution {
public:
    bool hasDuplicate(vector<int>& v) {
        unordered_map<int, int> m;
        for(int i=0; i<v.size(); i++){
            m[v[i]]++;
            if(m[v[i]] == 2)
            return true;
        }
        return false;
    }
};