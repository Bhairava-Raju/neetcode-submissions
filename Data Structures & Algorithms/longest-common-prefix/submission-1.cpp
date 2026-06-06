class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1){
            return strs[0];
        }
        string c = "";
        string a = strs[0];
        for(int i=0; i<a.size(); i++){
            for(int j=1; j<strs.size(); j++){
                bool d = true;
                string b = strs[j];
                if(b[i] != a[i]){
                    d = false;
                    return c;
                }
                else if(b[i] == a[i] && j == (strs.size() - 1)){
                    c += a[i];
                }
            }
        }
        return c;
    }
};