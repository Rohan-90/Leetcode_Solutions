class Solution {
public:
    int solve(string &text1, string& text2, int i , int j, vector<vector<int>>& dp){
        if(i >= text1.size() || j >= text2.size()) return 0;
        if(dp[i][j] != -1) return dp[i][j]; 
        if(text1[i] == text2[j]) return 1 + solve(text1, text2, i + 1,j + 1, dp);
        else{
            int ii = solve(text1, text2, i + 1,j, dp);
            int jj = solve(text1, text2, i,j + 1, dp);
            dp[i][j] = max(ii,jj);
        }
        return dp[i][j];
    }
    int func(string text1, string text2, int i , int j){
        if(i >= text1.size() || j >= text2.size()) return 0;
        if(text1[i] == text2[j]) return 1 + func(text1, text2, i + 1,j + 1);
        else{
            int ii = func(text1, text2, i + 1,j);
            int jj = func(text1, text2, i,j + 1);
            return max(ii,jj);
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp (text1.size() + 1, vector<int> (text2.size() + 1, -1));
        return solve(text1, text2, 0 , 0, dp);
    }
};