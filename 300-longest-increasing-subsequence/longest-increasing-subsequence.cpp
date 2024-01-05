class Solution {
public:
    int solve(int index, int prevIndex, vector<int>& nums, vector<vector<int>>& dp){
        if(index == nums.size()) return 0;
        if(dp[index][prevIndex + 1] != -1) return dp[index][prevIndex + 1];
        int len = 0 + solve(index+1, prevIndex, nums, dp);
        if(prevIndex == -1 || nums[index] > nums[prevIndex]) len = max(len, 1 + solve(index+1, index, nums, dp));
        return dp[index][prevIndex + 1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
       vector<vector<int>> dp(nums.size(), vector<int> (nums.size() + 1, -1));
       return solve(0, -1, nums, dp);
    }
};