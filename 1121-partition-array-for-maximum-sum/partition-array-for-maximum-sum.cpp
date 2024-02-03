class Solution {
public:
    int solve(vector<int>& arr, int k, int index, vector<int>& dp){
        int n = arr.size();
        if(index >= n) return 0;
        int currMax = 0; 
        int ans = 0;
        if(dp[index] != -1) return dp[index];
        for(int i = index; i < index + k && i < n; i++){
            currMax = max(currMax, arr[i]);
            int tempAns = (i - index + 1)* (currMax) + solve(arr, k , i + 1, dp);
            ans = max(tempAns, ans);
        }
        dp[index] = ans;
        return dp[index];
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size() + 1, -1);
        return solve(arr, k, 0, dp);
    }
};