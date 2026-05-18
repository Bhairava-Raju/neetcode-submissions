class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m-1;
        int p2 = nums1.size() - 1;
        int p3 = nums2.size() - 1;
        while(p1 >= 0 && p3 >= 0){
            if(nums1[p1] >= nums2[p3]){
                nums1[p2] = nums1[p1];
                p1--;
                p2--;
            }else{
                nums1[p2] = nums2[p3];
                p3--;
                p2--;
            }
        }
        while(p3 >= 0){
            nums1[p2] = nums2[p3];
            p3--;
            p2--;
        }
    }
};