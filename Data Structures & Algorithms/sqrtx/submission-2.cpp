class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        long long l = 0;
        long long h = x/2;
        int ans = 0;
        while(l <= h){
            long long m = (l + h)/2;
            if(m * m == x) return m;
            else if(m * m < x){
                l = m + 1;
                ans = m;
            }
            else h = m - 1;
        }
        return ans;
    }
};