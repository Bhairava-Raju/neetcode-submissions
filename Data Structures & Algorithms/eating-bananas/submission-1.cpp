class Solution {
public:
    int cal(vector<int>& piles, double num){
        int sum = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            sum += ceil(piles[i] / num);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long high = *max_element(piles.begin(), piles.end());
        long long low = 1;
        long long ans = INT_MAX;
        while(low <= high){
            long long mid = (low + high) / 2;
            ans = cal(piles, mid);
            if(ans <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
