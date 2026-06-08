class Solution {
public:
    int searchb(vector<int> &nums, int target, int l, int r){
        while(l <= r){
            int mid = l + (r - l)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while(l < r){
            int mid = l + (r - l)/2;
            if(nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }
        r = nums.size() - 1;
        if(nums[l] <= target && target <= nums[r]) return searchb(nums, target, l, r);
        else{
            r = l - 1;
            l = 0;
        }
        return searchb(nums, target, l, r);
    }
};
