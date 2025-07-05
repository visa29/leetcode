// RECURSION + MEMOIZATION
class Solution {
public:
    int mps(int row, int col, int m, int n, vector<vector<int>>& grid, vector<vector<int>>& dp){
        if(row == m || col == n) return INT_MAX; 
        if(row == m-1 && col == n-1) return grid[row][col];
        if(dp[row][col] != -1) return dp[row][col];
        return dp[row][col] = grid[row][col] + min(mps(row+1, col, m, n, grid, dp), mps(row, col+1, m, n, grid, dp));
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return mps(0, 0, m, n, grid, dp);
    }
};

/* // RECURSION
// TLE
class Solution {
public:
    int mps(int row, int col, int m, int n, vector<vector<int>>& grid){
        if(row == m || col == n) return INT_MAX; // during comparison, we take the minimum value. since this path is not right, we should choose the other path, so we make this as max, so that this is not chosen
        if(row == m-1 && col == n-1) return grid[row][col];
        return grid[row][col] + min(mps(row+1, col, m, n, grid), mps(row, col+1, m, n, grid));
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        return mps(0, 0, m, n, grid);
    }
};
*/