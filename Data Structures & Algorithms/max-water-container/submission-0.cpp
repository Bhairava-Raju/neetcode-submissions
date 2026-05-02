class Solution {
public:
    int maxArea(vector<int>& h) {
        auto i = h.begin();
        auto j = h.end()-1;
        int ma = 0;
        while(i < j){
            int wc = (j - i) * min(*i, *j);
            if(*i < *j){
                i++;
            }else{
                j--;
            }
            ma = max(wc, ma);
        }
        return ma;
    }
};
