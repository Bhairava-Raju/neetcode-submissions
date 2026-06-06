class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> us;
        for(int i=0; i<nums.size(); i++){
            us.insert(nums[i]);
        }
        int ls = 1;
        int cc = 1;
        for(int i=0; i<nums.size(); i++){
            if(us.find(nums[i] - 1) == us.end()){
                int a = nums[i];
                while(us.find(a + 1) != us.end()){
                    cc++;
                    a++;
                }
            }
            ls = max(ls, cc);
            cc = 1;
        }
        return ls;
    }
};