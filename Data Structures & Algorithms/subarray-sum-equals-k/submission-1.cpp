class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> m;
        m[0] = 1;
        int ps = 0;
        int ct = 0;
        for(int i=0; i<nums.size(); i++){
            ps += nums[i];
            if(m.find(ps - k) == m.end()){
                m[ps]++;
            }else{
                ct += m[ps-k];
                m[ps]++;
            }
        }
        return ct;
    }
};