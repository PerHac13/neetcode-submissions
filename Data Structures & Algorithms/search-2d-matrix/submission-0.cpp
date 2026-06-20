class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();

        int l = 0, r = row*col -1;

        while(l<=r){
            int mid = l + (r-l)/2;
            int ro = mid/col, c = mid%col;
            if(target> matrix[ro][c]){
                l = mid+1;
            }else if(target< matrix[ro][c]){
                r = mid-1;
            }else{
                // cout<< mid;
                return true;
            }
        }
        return false;
    }
};
