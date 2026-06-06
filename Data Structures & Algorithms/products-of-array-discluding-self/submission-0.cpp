class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1(n);
        vector<int> v2(n);
        vector<int> v3(n);
        for(int i=0; i<n; i++){
            if(i == 0){
                v1[i] = 1;
                v2[n-1] = 1;
                continue;
            }
            v1[i] = v1[i-1]*nums[i-1];
            v2[n-1-i] = v2[n-i]*nums[n-i];
        }
        for(int i=0; i<n; i++){
            v3[i] = v1[i]*v2[i];
        }
        return v3;
    }
};
