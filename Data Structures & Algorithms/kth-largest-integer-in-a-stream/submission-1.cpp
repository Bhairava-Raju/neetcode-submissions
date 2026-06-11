class KthLargest {
public:
    vector<int> v;
    int a;
    KthLargest(int k, vector<int>& nums) {
        v = nums;
        a = k;
    }
    
    int add(int val) {
        v.push_back(val);
        sort(v.begin(), v.end());
        return v[v.size() - a];
    }
};
