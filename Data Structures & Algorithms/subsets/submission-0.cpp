class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vv;
        vector<int> v;
        fs(nums, nums.size(), 0, vv, v);
        return vv;
    }
    void fs(vector<int> &nums, int n, int i, vector<vector<int>> &vv, vector<int> v){
        if(i == n){
            vv.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        fs(nums, n, i+1, vv, v);
        v.pop_back();
        fs(nums, n, i+1, vv, v);
    }
};
