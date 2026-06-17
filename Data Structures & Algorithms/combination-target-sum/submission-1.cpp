class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> vv;
        vector<int> v;
        helper(nums, target, vv, v, 0, nums.size());
        return vv;
    }
    void helper(vector<int> &nums, int target, vector<vector<int>> &vv, vector<int> v, int index, int n){
        if(index == n){
            if(target == 0){
                vv.push_back(v);
            }
            return;
        }
        if(nums[index] <= target){
            v.push_back(nums[index]);
            helper(nums, target - nums[index], vv, v, index, n);
            v.pop_back();
        }
        helper(nums, target, vv, v, index + 1, n);
    }
};
