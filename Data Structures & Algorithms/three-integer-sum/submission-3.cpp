class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        vector<vector<int>> v;
        sort(n.begin(), n.end());

        auto k = n.begin();

        while (k < n.end() - 2) {

            // skip duplicate k
            if (k != n.begin() && *k == *(k - 1)) {
                k++;
                continue;
            }

            auto i = k + 1;
            auto j = n.end() - 1;

            while (i < j) {
                int sum = *k + *i + *j;

                if (sum == 0) {
                    v.push_back({*k, *i, *j});

                    i++;
                    j--;

                    // skip duplicates for i
                    while (i < j && *i == *(i - 1)) i++;

                    // skip duplicates for j
                    while (i < j && *j == *(j + 1)) j--;
                }
                else if (sum < 0) {
                    i++;
                }
                else {
                    j--;
                }
            }

            k++; // correct place
        }

        return v;
    }
};