class Solution {
public:
    int tabulation(vector<int>& nums, int n){
        vector<int> dp(n+1,-1);
        if(n == 0) return 0;
        dp[0] = nums[0];
        if(n == 1) return dp[0];
        dp[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i < n; i++){
                int include = nums[i] + dp[i-2];
                int exclude = 0 + dp[i-1];
                dp[i] = max(include, exclude);
        }
        return dp[n-1];
    }
    int dpMemo(vector<int>& nums, int n, int index, vector<int>& dp){
        if(index >= n) return 0;
        if(dp[index] != -1) return dp[index];
        int option1 = nums[index] + dpMemo(nums, n, index + 2, dp);
        int option2 = 0 + dpMemo(nums, n, index + 1, dp);
        dp[index] = max(option1, option2);
        return dp[index];
       
    }
    int maxAmount(vector<int>& nums, int n, int index){
        if(index >= n) return 0;
        int option1 = nums[index] + maxAmount(nums, n, index + 2);
        int option2 = 0 + maxAmount(nums, n, index + 1);
        int ans = max(option1, option2);
        return ans;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        //vector<int> dp(n+1,-1);
        return tabulation(nums, n);
    }
};