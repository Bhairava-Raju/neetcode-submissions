class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == i+1 || nums[i] <= 0) continue;
            else if(nums[i] != i+1 && nums[i] <= nums.size() && nums[i] > 0){
                while(nums[i] != i+1 && nums[i] <= nums.size() && nums[i] > 0){
                    if(nums[nums[i] - 1] == nums[i]) break;
                    swap(nums[i], nums[nums[i] - 1]);
                }
            }
        }
        int i;
        for(i=0; i<nums.size(); i++){
            if(nums[i] != i + 1) break;
        }
        return i+1;
    }
};