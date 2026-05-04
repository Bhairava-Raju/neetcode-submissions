class Solution {
public:
    int maxProfit(vector<int>& p) {
        int cur = 0;
        int m = 0;
        int pro = 0;
        int sp = 0;
        for(int i=0; i<p.size(); i++){
            if(i == 0){
            cur, m = p[i], p[i]; continue;}
            cur = p[i];
            m = min(m, cur);
            pro = cur - m;
            sp = max(sp, pro);
        }
        if(sp <= 0)
        return 0;
        return sp;
    }
};
