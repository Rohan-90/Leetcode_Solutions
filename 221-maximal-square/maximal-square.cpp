class Solution {
public:
    int dpMemo(vector<vector<char>>& matrix, int i, int j, int row, int col, int& maxi,vector<vector<int>>& dp){
        if(i >= row || j >= col) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int down = dpMemo(matrix, i + 1, j, row, col, maxi, dp);
        int right = dpMemo(matrix, i, j + 1, row, col, maxi, dp);
        int diagonal = dpMemo(matrix, i + 1, j + 1, row, col, maxi, dp);
        int ans = 0;
        if(matrix[i][j] == '1'){
            ans = 1 + min(down, min(right, diagonal)); 
            maxi = max(ans, maxi);
        }
        dp[i][j] = ans;
        return ans;
    }
    int solve(vector<vector<char>>& matrix, int i, int j, int row, int col, int& maxi){
        if(i >= row || j >= col) return 0;

        int down = solve(matrix, i + 1, j, row, col, maxi);
        int right = solve(matrix, i, j + 1, row, col, maxi);
        int diagonal = solve(matrix, i + 1, j + 1, row, col, maxi);
        if(matrix[i][j] == '1'){
            int ans = 1 + min(down, min(right, diagonal)); 
            // next line me galti kar sakta hu 
            maxi = max(maxi, ans);
            return ans;
        }
        else return 0;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if(row == 0) return 0;
        int col = matrix[0].size();
        vector<vector<int>> dp(row, vector<int>(col, -1));
        int maxi = 0;
        int ans = dpMemo(matrix, 0, 0, row, col, maxi, dp);
        return maxi * maxi;
    }
};