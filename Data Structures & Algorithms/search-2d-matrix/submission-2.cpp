class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int h = matrix.size() - 1;
        int m = 0;
        while(l <= h){
            m = (l + h)/2;
            if(target >= matrix[m][0] && matrix[m][matrix[m].size()-1] >= target){
                break;
            }
            else if(target < matrix[m][0]) h = m - 1;
            else if(target > matrix[m][matrix[m].size()-1])l = m + 1;
        }
        int low = 0;
        int high = matrix[m].size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(matrix[m][mid] == target) return true;
            else if(matrix[m][mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};
