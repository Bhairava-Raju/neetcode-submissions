class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        map<int, vector<int>> mm;
        for(auto it : m){
            mm[it.second].push_back(it.first);
        }
        vector<int> v;
        for (auto it = mm.rbegin(); it != mm.rend(); it++) {
            for (int i = 0; i < it->second.size(); i++) {
                v.push_back(it->second[i]);
                if (v.size() == k) {
                    return v;
                }
            }
        }
        return v;
    }
};
