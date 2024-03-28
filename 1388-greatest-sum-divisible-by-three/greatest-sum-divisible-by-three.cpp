class Solution {
public:
    int solve(vector<int>& nums, int i, int sum, vector<vector<int>>& dp){
        if(i == nums.size()){
            if(sum % 3 == 0) return 0;
            else return INT_MIN;
        }
        if(dp[i][sum] != -1) return dp[i][sum];
        int include = solve(nums, i + 1, (sum + nums[i]) % 3, dp) + nums[i];
        int exclude = solve(nums,i + 1, sum, dp);
        dp[i][sum] = max(include,exclude); 
        return dp[i][sum];
    }
    int maxSumDivThree(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(3, -1));
        return solve(nums, 0, 0, dp);
    }
};