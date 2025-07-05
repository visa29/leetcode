class Solution {
public:
    int up(int row, int col, int m, int n, vector<vector<int>> &dp, vector<vector<int>>& og) {
        if(row == m || col == n) // outside the boundary, so no need to check obstacle is there or not
           return 0;
        if(og[row][col] == 1) // if there is an obstacle, return 0 blindly. Write this above m-1, n-1 checking, because, even the last element could be an obstacle, at that case the output should be zero 
           return 0;
        if(row == m-1 && col == n-1)
           return 1;
        if(dp[row][col] != -1) 
           return dp[row][col];
        return dp[row][col] = up(row+1, col, m, n, dp, og) + up(row, col+1, m, n, dp, og);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        int m = og.size();
        int n = og[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return up(0, 0, m, n, dp, og);
    }
};