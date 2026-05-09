class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]] += 1;
        }
        map<int, vector<int>> m1;
        for(auto it : m){
            m1[it.second].push_back(it.first);
        }for(auto it = m1.rbegin(); it != m1.rend() && k > 0; ++it){
            for(int x : it->second){
                v.push_back(x);
                k--;
                if(k == 0)
                return v;
            }
        }
        
    }
};

