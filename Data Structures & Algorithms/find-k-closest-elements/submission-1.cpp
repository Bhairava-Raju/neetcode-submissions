class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        vector<int> v;
        int n = nums.size();
        int l = 0;
        int h = n-1;
        bool found = false;
        int m = 0;
        while(l <= h){
            m = (l + h)/2;
            if(nums[m] == x){
                found = true;
                break;
            }
            else if(nums[m] < x) l = m + 1;
            else h = m - 1;
        }
        if(found == true){
            v.push_back(nums[m]);
            k--;
            l = m - 1;
            h = m + 1;
        }else{
            int temp = l;
            l = h;
            h = temp;
        }
        while(k > 0 && l >= 0 && h < n){
            if(abs((long long)nums[l] - x) < abs((long long)nums[h] - x) || ((abs((long long)nums[l] - x) == abs((long long)nums[h] - x)) && (long long)nums[l] < (long long)nums[h])){
                v.push_back(nums[l]);
                l--;
            }else{
                v.push_back(nums[h]);
                h++;
            }
            k--;
        }
        while(l >= 0 && k > 0){
            v.push_back(nums[l]);
            l--;
            k--;
        }
        while(h < n && k > 0){
            v.push_back(nums[h]);
            h++;
            k--;
        }
        sort(v.begin(), v.end());
        return v;
    }
};