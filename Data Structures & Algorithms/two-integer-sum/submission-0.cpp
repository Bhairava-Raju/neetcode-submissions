class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m1;
        int a;
        for(int i=0; i<nums.size(); i++){
            a = target - nums[i];
            if(m1.find(a) != m1.end()){
                return {m1[a], i};
            }else{
            m1[nums[i]] = i;
            }
        }
        return {};
    }
};
