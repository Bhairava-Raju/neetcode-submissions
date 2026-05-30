class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        vector<pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            v[i].first = position[i];
            v[i].second = speed[i];
        }
        sort(v.begin(), v.end(), greater<pair<int, int>>());
        stack<float> s;
        s.push((float)(target - v[0].first)/v[0].second);
        for(int i=1; i<n; i++){
            float time = (float)(target - v[i].first)/v[i].second;
            if(time <= s.top()) continue;
            else s.push(time);
        }
        return s.size();
    }
};
