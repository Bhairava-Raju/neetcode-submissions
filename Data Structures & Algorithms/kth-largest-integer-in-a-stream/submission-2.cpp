class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int a;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            pq.push(nums[i]);
        }
        while(pq.size() > k){
            pq.pop();
        }
        a = k;
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > a) pq.pop();
        return pq.top();
    }
};
