class Solution {
public:
    int solve(string& s, int index, vector<int>& dp){
        int ans = 0;
        if(index == s.size()) return 1;
        if(s[index] == '0') return 0;
        if(dp[index] != -1) return dp[index];
        ans = solve(s,index + 1, dp);
        if(index + 1 < s.size() && (s[index] == '1' || s[index] == '2' && s[index + 1] <= '6'))
            ans += solve(s,index + 2, dp);
        dp[index] = ans; 
        return dp[index];
    }
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return solve(s, 0, dp);
    }
};
