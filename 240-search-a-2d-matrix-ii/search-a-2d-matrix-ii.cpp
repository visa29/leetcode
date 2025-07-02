class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // no. of rows
        int n = matrix[0].size(); // no. of columns
        int rowidx = m-1;
        int colidx = 0;
        while(colidx < n && rowidx >=0)
        {
            if(matrix[rowidx][colidx] == target)
               return true;
            if(matrix[rowidx][colidx] > target)
               rowidx--;
            else
               colidx++;
        }
        return false;
        // TC : O(m + n)
        // SC : O(1)
    }
};