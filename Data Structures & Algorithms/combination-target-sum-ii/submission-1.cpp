class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> vv;
        vector<int> v;
        helper(nums, v, 0, target, vv);
        return vv;
    }
     void helper(vector<int>& nums, vector<int> v, int index, int target, vector<vector<int>> &vv){
        if(target == 0){
            vv.push_back(v);
            return;
        }
        int n = nums.size();
        for(int i = index; i < n; i++){
            if(nums[i] > target) break;
            if(i > index && nums[i] == nums[i-1]) continue;
            v.push_back(nums[i]);
            helper(nums, v, i+1, target-nums[i], vv);
            v.pop_back();
        }
    }
};