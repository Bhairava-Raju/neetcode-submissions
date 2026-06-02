class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        auto l = people.begin();
        auto r = people.end() - 1;
        int ct = 0;
        while(l <= r){
            if((*l + *r) > limit){
                ct++;
                r--;
            }else{
                l++;r--;ct++;
            }
        }
        return ct;
    }
};