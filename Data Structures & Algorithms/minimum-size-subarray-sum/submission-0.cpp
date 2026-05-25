class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int min_len = INT_MAX;
        int l = 0;
        int r = 0;
        while(r < nums.size()){
            sum += nums[r];
                while(sum >= target && l <= r){
                    min_len = min(min_len, r - l + 1);
                    sum -= nums[l];
                    l++;
                }
            r++;
        }
        if(min_len < INT_MAX){
            return min_len;
        }
        return 0;
    }
};