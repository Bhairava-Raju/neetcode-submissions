class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == i+1 || nums[i] <= 0) continue;
                while(nums[i] != i+1 && nums[i] <= n && nums[i] > 0){
                    if(nums[nums[i] - 1] == nums[i]) break;
                    swap(nums[i], nums[nums[i] - 1]);
                }
        }
        int i;
        for(i=0; i<nums.size(); i++){
            if(nums[i] != i + 1) break;
        }
        return i+1;
    }
};