class Solution {
public:
    int search(vector<int>& n, int target) {
        int l = 0;
        int r = n.size()-1;
        int m;
        while(l <= r){
            m = (l+r)/2;
            if(n[m] == target){
                return m;
            }
            if(n[l] <= n[m]){
                if(target >= n[l] && target < n[m]){
                    r = m-1;
                }else{
                    l = m + 1;
                }
            }else if(n[m] <= n[r]){
                if(target <= n[r] && target > n[m]){
                    l = m + 1;
                }else{
                    r = m-1;
                }
            }
        }
        return -1;
    }
};
