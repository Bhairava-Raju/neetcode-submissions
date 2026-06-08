class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l = 0;
        int r = n-1;
        if(nums[l] <= nums[r]) return nums[l];
        while(l < r){
            int m = (l+r)/2;
            if(nums[l] < nums[m]) l = m;
            else r = m;
        }
        return nums[l + 1];
    }
};
