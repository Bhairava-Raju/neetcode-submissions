class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v;
        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "+"){
                int sum = v[v.size() - 1] + v[v.size() - 2];
                v.push_back(sum);
            }
            else if(operations[i] == "D"){
                v.push_back(v.back() * 2);
            }
            else if(operations[i] == "C"){
                v.pop_back();
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        int sum = 0;
        for(int i=0; i<v.size(); i++){
            sum += v[i];
        }
        return sum;
    }
};