class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vv;
        vector<int> v;
        fs(nums, vv, v, 0, nums.size());
        return vv;
    }
    void fs(vector<int>& nums, vector<vector<int>> &vv, vector<int> v, int i, int n){
        if(i == n){
            vv.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        fs(nums, vv, v, i+1, n);
        v.pop_back();
        fs(nums, vv, v, i+1, n);
    }
};
