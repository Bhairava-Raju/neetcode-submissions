class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int l = 0;
        int r = 0;
        int profit = 0;
        while(r < nums.size()){
            if(nums[r] - nums[l] < 0 && l < r){
                l++;
                continue;
            }
            profit = max(profit, nums[r] - nums[l]);
            r++;
        }
        return profit;
    }
};
