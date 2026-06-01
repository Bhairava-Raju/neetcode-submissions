class Solution {
public:
    int cal(vector<int>& weights, int m){
        int days = 1;
        int sum = 0;
        int n = weights.size();
        for(int i=0; i<n ; i++){
            if(sum + weights[i] > m){
                sum = 0;
                sum += weights[i];
                days++;
            }
            else{
                sum += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);
        int m = 0;
        while(l <= h){
            m = (l + h) / 2;
            int ans = cal(weights, m);
            if(ans <= days) h = m - 1;
            else l = m + 1;
        }
        return l;
    }
};