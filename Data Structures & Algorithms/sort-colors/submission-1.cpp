class Solution {
public:
    void sortColors(vector<int>& nums) {
        auto low = nums.begin();
        auto mid = nums.begin();
        auto high = nums.end() - 1;
        while(mid <= high){
            if(*mid == 0){
                swap(*low, *mid);
                mid++;
                low++;
            }else if(*mid == 1) mid++;
            else{
                swap(*mid, *high);
                high--;
            }
        }
    }
};