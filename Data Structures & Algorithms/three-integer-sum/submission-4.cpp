class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;
        map<vector<int>, int> us;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                for(int k=j+1; k<nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[j]);
                        v.push_back(nums[k]);
                        sort(v.begin(), v.end());
                        us[v]++;
                        if(us[v] > 1){
                            continue;
                        }else{
                            vv.push_back(v);
                        }
                    }
                }
            }
        }
        return vv;
    }
};
