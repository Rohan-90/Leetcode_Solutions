class Solution {
public:
    bool solve(int ind, string &s, vector<int>& dp, vector<string>& wordDict){
        if(ind == s.size()) return true;
        if(dp[ind] != -1) return dp[ind];
        for(int j = ind; j < s.size(); j++){
            string ff = s.substr(ind, j-ind+1);
            if(find(wordDict.begin(), wordDict.end(), ff) != wordDict.end()){
                if(solve(j + 1, s, dp, wordDict)) return dp[ind] = true; 
            }
        }
        return dp[ind] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<int> dp(n + 1, -1);
        return solve(0, s, dp, wordDict);
    }
};