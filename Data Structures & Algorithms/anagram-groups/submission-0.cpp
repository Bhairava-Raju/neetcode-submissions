class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        int n = s.size();
        map<vector<int>, vector<string>> m;
        for(int i=0; i<n; i++){
            vector<int> v(26, 0);
            string a = s[i];
            for(int j=0; j<a.size(); j++){
                int c = a[j] - 'a';
                v[c]++;
            }
            m[v].push_back(a);
        }
        vector<vector<string>> q;
        for(auto it : m){
            q.push_back(it.second);
        }
        return q;
    }
};
