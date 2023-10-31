class Solution {
public:
    int solve(int i, int j, string& word1, string& word2, vector<vector<int>>& dp){
        if(i >= word1.size()) return word2.size() - j;
        if(j >= word2.size()) return word1.size() - i;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        if(word1[i] == word2[j]) ans = 0 + solve(i+1, j+1, word1, word2, dp);
        else{
            int option1 = 1 + solve(i, j+1, word1, word2, dp); //insert
            int option2 = 1 + solve(i+1, j, word1, word2, dp); // remove
            int option3 = 1 +solve(i+1, j+1, word1, word2, dp);  // replace
            ans = min(option1, min(option2, option3));
        }
        dp[i][j] = ans;
        return dp[i][j];
    }
    int count(int i, int j, string& word1, string& word2){
        if(i >= word1.size()) return word2.size() - j;
        if(j >= word2.size()) return word1.size() - i;
        int ans = 0;
        if(word1[i] == word2[j]) ans = 0 + count(i+1, j+1, word1, word2);
        else{
            int option1 = 1 + count(i, j+1, word1, word2); //insert
            int option2 = 1 + count(i+1, j, word1, word2); // remove
            int option3 = 1 + count(i+1, j+1, word1, word2);  // replace
            ans = min(option1, min(option2, option3));
        }
        return ans;
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return solve(0,0,word1,word2, dp);
    }
};