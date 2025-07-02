class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int rowSize = m.size();
        int colSize = m[0].size();
        int left = 0, right = rowSize*colSize-1;
        while(left <= right)
        {
            int mid = (left + right)/2;
            int rowIdx = mid / colSize;
            int colIdx = mid % colSize;
            if(m[rowIdx][colIdx] == target)
                return true;
            if(target > m[rowIdx][colIdx])
                left = mid+1;
            else
                right = mid-1;
        }
        return false;
    }
};