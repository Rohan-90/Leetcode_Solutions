class Solution {
public:
    int dpMemo(int i, int j,string& s, string& t, vector<vector<int>>& dp){
        if(j == t.length()) return 1;
        if(i == s.length()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        int take = 0;
        int skip = 0;
        if(s[i] == t[j]) take = dpMemo(i+1,j+1,s,t, dp);
        skip = dpMemo(i+1,j,s,t, dp);
        return dp[i][j] = take + skip;
    }
    int solve(int i, int j,string& s, string& t){
        if(j == t.length()) return 1;
        if(i == s.length()) return 0;
        int take = 0, skip = 0;
        if(s[i] == t[j]) take = solve(i+1,j+1,s,t);
        skip = solve(i+1,j,s,t);
        return take + skip;
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n+1, vector<int> (m+1, -1));
        return dpMemo(0, 0, s, t, dp);
    }
};