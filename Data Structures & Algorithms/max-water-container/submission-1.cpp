class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mw = 0;
        auto l = heights.begin();
        auto r = heights.end() - 1;
        while(l < r){
            int sb = min(*l, *r);
            int water = sb * (r - l);
            mw = max(mw, water);
            if(*r > *l){l++;}else{r--;}
        }
        return mw;
    }
};
