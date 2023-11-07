class Solution {
public:
    int dpMemo(int i, int j, int m, int n, vector<vector<int>>& dp){
        if(i >= m || j >= n) return 0;
        if(i == m - 1 && j == n - 1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = dpMemo(i + 1, j , m, n, dp) + dpMemo(i, j + 1, m, n, dp);
    }
    int recursive(int i, int j, int m, int n){
        if(i >= m || j >= n) return 0;
        if(i >= m - 1 && j >= n - 1) return 1;
        int ans = recursive(i + 1, j , m, n) + recursive(i, j + 1, m, n);
        return ans;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n ,-1));
        return dpMemo(0, 0, m, n, dp);
    }
};