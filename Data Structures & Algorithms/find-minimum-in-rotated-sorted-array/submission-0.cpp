class Solution {
public:
    int findMin(vector<int> &n) {
        int l = 0;
        int r = n.size()-1;
        int m;
        while(l != r){
            m = (l+r)/2;
            if(n[m] > n[r]){
                l = m+1;
            }else if(n[m] <= n[r]){
                r = m;
            }
        }return n[l]; 
    }
};
