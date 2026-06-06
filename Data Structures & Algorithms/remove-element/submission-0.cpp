class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ct = 0;
        auto l = nums.begin();
        auto r = nums.begin();
        while(r < nums.end()){
            if(*r != val){
                swap(*l, *r);
                ct++;
                l++;
            }
            r++;
        }
        return ct;
    }
};