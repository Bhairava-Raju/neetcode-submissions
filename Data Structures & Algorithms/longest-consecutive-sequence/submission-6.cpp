class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ls = 1;
        int cs = 1;
        for(int i=0; i<n; i++){
            if(i == 0 || nums[i] == nums[i - 1]){
                if(i==n-1){
                    ls = cs;
                }
                continue;
            }
            if(nums[i] == nums[i-1] + 1){
                cs += 1;
                if(i  == n-1 && cs > ls)
                ls = cs;
            }else{
                if(cs > ls)
                ls = cs;
                cs = 1;
            }
        }
        return ls;
    }
};
