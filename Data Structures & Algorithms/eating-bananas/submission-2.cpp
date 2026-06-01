class Solution {
public:
    int cal(vector<int>& piles, int num){
        int sum = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            sum += ceil((double)piles[i] / num);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int ans = cal(piles, mid);
            if(ans <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};
