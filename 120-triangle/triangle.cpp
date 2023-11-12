class Solution {
public:
    int dpMemo(int row, int col, vector<vector<int>>& triangle, vector<vector<int>>& dp){
        int n = triangle.size();
        if(row >= n) return 0;
        int m = triangle[row].size();
        if(col >= m) return 0;
        if(dp[row][col] != -1) return dp[row][col];
        dp[row][col] = triangle[row][col] + min(dpMemo(row + 1, col, triangle,dp), dpMemo(row + 1, col + 1, triangle,dp));
        return dp[row][col];
    }
    int solve(int row, int col, vector<vector<int>>& triangle){
        int n = triangle.size();
        if(row >= n) return 0;
        int m = triangle[row].size();
        if(col >= m) return 0;

        int res = triangle[row][col] + min(solve(row + 1, col, triangle), solve(row + 1, col + 1, triangle));
        return res;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();
        vector<vector<int>> dp(n+1,vector<int> (m+1, -1));
        int ans = dpMemo(0,0,triangle, dp);
        return ans;
    }
};