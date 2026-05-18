class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> us;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int j = i+1;
            int k = nums.size() - 1;
            while(j < k){
                if(nums[i] + nums[j] + nums[k] == 0){
                    vector<int> v = {nums[i], nums[j], nums[k]};
                    us.insert(v);
                    j++;
                    k--;
                }
                else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }else{
                    k--;
                }
            }
        }
        vector<vector<int>> vv{us.begin(), us.end()};
        return vv;
    }
};
